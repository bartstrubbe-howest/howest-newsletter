(function($){

  $('#block-search-form input[type="text"]').hover(function(){
    $(this).closest('.input-group').addClass('focus');
  }, function(){
    $(this).closest('.input-group').removeClass('focus');
  });


}(jQuery));