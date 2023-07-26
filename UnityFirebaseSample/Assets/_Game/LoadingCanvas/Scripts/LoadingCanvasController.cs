using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Scripts;
using OrhonBey.Utility;
using UnityEngine;

[RequireComponent(typeof(CanvasGroup))]
public class LoadingCanvasController : CanvasControllerBase
{
    public static LoadingCanvasController Instance;
    protected override void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
        base.Awake();
    }
}