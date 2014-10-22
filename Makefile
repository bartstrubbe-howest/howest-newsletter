ROOT := htdocs
DRUSHMAKE := drush.make

build: clean chmod drushmake patch finish

clean:
	-rm -r $(ROOT)/sites/all
	-rm -r $(ROOT)/includes
	-rm -r $(ROOT)/misc
	-rm -r $(ROOT)/modules
	-rm -r $(ROOT)/scripts
	-rm -r $(ROOT)/themes
	-rm -r $(ROOT)/profiles/minimal
	-rm -r $(ROOT)/profiles/standard
	-rm -r $(ROOT)/profiles/testing
	-rm -f $(ROOT)/web.config
	-rm -r $(ROOT)/.htaccess
	-rm -r $(ROOT)/.gitignore
	-rm $(ROOT)/*.txt
	-rm $(ROOT)/*.php

chmod:
	chmod a+w $(ROOT)/sites/default

drushmake:
	cd $(ROOT) && drush make --no-gitinfofile ../$(DRUSHMAKE) .

patch:
	# example
	# patch -p1 < patches/some_patch.diff
finish:
	@echo 'finished'
