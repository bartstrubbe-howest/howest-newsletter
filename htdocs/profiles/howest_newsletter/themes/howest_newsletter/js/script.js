jQuery.noConflict();

(function($){

  $(document).ready(function(){
    $('.node h2').each(function(){
      $(this).append($(this).closest('.node').find('.field-name-field-location'));
      $(this).append($(this).closest('.node').find('.field-name-field-content'));
    });
  });

}(jQuery));