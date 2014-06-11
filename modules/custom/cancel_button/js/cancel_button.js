/**
 * Behavior for the whole page
 */
(function ($) {
  Drupal.behaviors.cancel_button = {
    attach: function (context, settings) {
      /*Get the id of the cancel button. on click, go back by one page*/
      $('#edit-cancel').click(function(){
        window.history.back();
        return false;
      });
    }
  };
}(jQuery));
