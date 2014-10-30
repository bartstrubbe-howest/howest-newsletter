jQuery.noConflict();

(function($){

  $(document).ready(function(){
    $('.node h2').each(function(){
      $(this).append($(this).closest('.node').find('.field-name-field-location'));
      $(this).append($(this).closest('.node').find('.field-name-field-content'));
    });

    if($('#block-views-tag-cloud-block .views-row').length > 10){
      $('#block-views-tag-cloud-block .views-row').slice(10).hide();
      $('#block-views-tag-cloud-block').append('<a class="show-all-tags" href="#">Toon meer tags</a>');

      var visible = false;

      $('.show-all-tags').click(function(e){
        e.preventDefault();

        if(!visible){
          $('#block-views-tag-cloud-block .views-row').slideDown('fast');
          $(this).text('Toon minder tags');
          visible = true;
        } else {
          $('#block-views-tag-cloud-block .views-row').slice(10).slideUp('fast');
          $(this).text('Toon meer tags');
          visible = false;
        }
      });
    }



  });


}(jQuery));