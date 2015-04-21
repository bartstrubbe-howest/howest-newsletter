<?php
  // Output the taxonomy term and link to its page. Used in the "categories" block in the sidebar.
  echo l(t($row->taxonomy_term_data_name), 'taxonomy/term/'.$row->tid);
?>
