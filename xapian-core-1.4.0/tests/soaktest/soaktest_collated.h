/* Warning: This file is generated by /data/home/olly/tmp/xapian-git-snapshot/tags/v1.4.0/xapian/xapian-core/tests/collate-test - do not modify directly! */

    if ((properties&WRITABLE)&&!(properties&REMOTE)&&!(properties&INMEMORY)) {
	static const test_desc tests[] = {
	    { "queries1", test_queries1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
