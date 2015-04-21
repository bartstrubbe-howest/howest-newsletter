<?php
  // Output the taxonomy term and link to its page.
  echo l(t($row->taxonomy_term_data_name), 'taxonomy/term/'.$row->tid);
?>
