howest-newsletter
=================

Drupal based implementation of Howest newsletter


* Install drupal with drush

```
drush si -y howest_newsletter --account-name=admin --account-pass=admin --db-url=mysql://root:admin@localhost/howest
```

* Use shared folder

```
/var/vhosts/newsletter

rm htdocs

ln -s /vagrant/howest-newsletter/htdocs/ htdocs
```
