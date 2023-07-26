/**
 * Import function triggers from their respective submodules:
 *
 * const {onCall} = require("firebase-functions/v2/https");
 * const {onDocumentWritten} = require("firebase-functions/v2/firestore");
 *
 * See a full list of supported triggers at https://firebase.google.com/docs/functions
 */
// Create and deploy your first functions
// https://firebase.google.com/docs/functions/get-started

// exports.helloWorld = onRequest((request, response) => {
//   logger.info("Hello logs!", {structuredData: true});
//   response.send("Hello from Firebase!");
// });

const { onRequest, onCall } = require("firebase-functions/v2/https");
const functions = require("firebase-functions");//Gen1 
const admin = require("firebase-admin");
const logger = require("firebase-functions/logger");

admin.initializeApp(
    {
        databaseURL: "https://unityfirebasesample-444c0-default-rtdb.europe-west1.firebasedatabase.app/"
    }
);


exports.userFirstData = onCall(async (request) => {
    //

    if (!request.auth) {
        var errorMessage = "user is not sign!";
        logger.error(errorMessage);
        return {
            errorMessage: errorMessage
        }
    }
    let databaseUsersRef = admin.database().ref("Users");

    var userId = request.auth.uid;
    var userSaveData = {};
    userSaveData.userId = userId;
    userSaveData.gold = 0;
    userSaveData.language = request.data.language;

    var user = databaseUsersRef.child(userId);

    user.once("value", (snapshot) => {
        if (!snapshot.exists()) {
            user.set(userSaveData);
        }
    });
    var response = {
        errorMessage: null,
        resultData: JSON.stringify(userSaveData)
    }
    return JSON.stringify(response);

});

exports.rewardCoinAddUser = onCall(async (request) => {

    if (!request.auth) {
        var errorMessage = "user is not sign!";
        logger.error(errorMessage);
        return {
            errorMessage: errorMessage
        }
    }

    var userId = request.auth.uid;

    const remoteConfig = admin.remoteConfig();
    const template = await remoteConfig.getTemplate();
    const rewardedGold = template.parameters.rewardedCoin.defaultValue.value;

    const userRef = admin.database().ref(`Users/${userId}/gold`);
    const goldSnapShot = await userRef.once('value');
    const currentGold = goldSnapShot.val();

    const newGold = Number(currentGold) + Number(rewardedGold);
    await userRef.set(newGold);

    var resultData = {
        errorMessage: null,
        data: newGold
    }
    return JSON.stringify(resultData);

});

exports.GetUser = onCall(async (request) => {

    if (!request.auth) {
        var errorMessage = "user is not sign!";
        logger.error(errorMessage);
        return {
            errorMessage: errorMessage
        }
    }
    const userId = request.auth.uid;
    var userRef = admin.database().ref(`Users/${userId}`);
    const user = await userRef.once('value');
    const userValue = user.val();
    var resultData = {
        errorMessage: null,
        data: userValue
    }
    return JSON.stringify(resultData);

});

