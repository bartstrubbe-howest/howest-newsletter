howest-newsletter
=================

Drupal based implementation of Howest newsletter


* Install drupal with drush

```
drush si -y howest_newsletter --account-name=admin --account-pass=admin --db-url=mysql://<db_user>:<db_pass>@localhost/<db_name>
```

* Use shared folder

```
/var/vhosts/newsletter

rm htdocs

ln -s /vagrant/howest-newsletter/htdocs/ htdocs
```


Deployment: install Drupal using an empty database, git pull, import database export.
