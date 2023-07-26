using OrhonBey.Utility;
using UnityEngine;

namespace _Game.Scripts
{
    [RequireComponent(typeof(CanvasGroup))]
    public class CanvasControllerBase : MonoBehaviour
    {
        public CanvasGroup CanvasGroup
        {
            get => _canvasGroup;
            protected set => _canvasGroup = value;
        }

        private CanvasGroup _canvasGroup;

        protected virtual void Awake()
        {
            _canvasGroup = GetComponent<CanvasGroup>();
            Hide();
        }

        public virtual void Show()
        {
            _canvasGroup.alpha = 1;
            _canvasGroup.blocksRaycasts = true;
        }

        public virtual void Hide()
        {
            _canvasGroup.alpha = 0;
            _canvasGroup.blocksRaycasts = false;
        }
    }
}