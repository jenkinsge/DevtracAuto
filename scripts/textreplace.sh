 #!/bin/sh
 
 grep -rl 'vocabulary_1' ../modules | xargs sed -i 's/vocabulary_1/location_type/g'
 grep -rl 'vocabulary_1' ../test | xargs sed -i 's/vocabulary_1/location_type/g'
 grep -rl 'vocabulary_1' ../themes | xargs sed -i 's/vocabulary_1/location_type/g'

 grep -rl 'vocabulary_4' ../modules | xargs sed -i 's/vocabulary_4/department/g'
 grep -rl 'vocabulary_4' ../test | xargs sed -i 's/vocabulary_4/department/g'
 grep -rl 'vocabulary_4' ../themes | xargs sed -i 's/vocabulary_4/department/g'

 grep -rl 'vocabulary_5' ../modules | xargs sed -i 's/vocabulary_5/function/g'
 grep -rl 'vocabulary_5' ../test | xargs sed -i 's/vocabulary_5/function/g'
 grep -rl 'vocabulary_5' ../themes | xargs sed -i 's/vocabulary_5/function/g'

 grep -rl 'vocabulary_6' ../modules | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'
 grep -rl 'vocabulary_6' ../test  | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'
 grep -rl 'vocabulary_6' ../themes  | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'

 grep -rl 'vocabulary_7' ../modules | xargs sed -i 's/vocabulary_7/site_report_type/g'
 grep -rl 'vocabulary_7' ../test  | xargs sed -i 's/vocabulary_7/site_report_type/g'
 grep -rl 'vocabulary_7' ../themes  | xargs sed -i 's/vocabulary_7/site_report_type/g'

 grep -rl 'vocabulary_8' ../modules | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'
 grep -rl 'vocabulary_8' ../test  | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'
 grep -rl 'vocabulary_8' ../themes  | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'

 grep -rl 'vocabulary_9' ../modules | xargs sed -i 's/vocabulary_9/purpose/g'
 grep -rl 'vocabulary_9' ../test  | xargs sed -i 's/vocabulary_9/purpose/g'
 grep -rl 'vocabulary_9' ../themes  | xargs sed -i 's/vocabulary_9/purpose/g'
 

 grep -rl 'vocabulary-1' ../modules | xargs sed -i 's/vocabulary-1/location-type/g'
 grep -rl 'vocabulary-1' ../test | xargs sed -i 's/vocabulary-1/location-type/g'
 grep -rl 'vocabulary-1' ../themes | xargs sed -i 's/vocabulary-1/location-type/g'

 grep -rl 'vocabulary-4' ../modules | xargs sed -i 's/vocabulary-4/department/g'
 grep -rl 'vocabulary-4' ../test | xargs sed -i 's/vocabulary-4/department/g'
  grep -rl 'vocabulary-4' ../themes | xargs sed -i 's/vocabulary-4/department/g'

 grep -rl 'vocabulary-5' ../modules | xargs sed -i 's/vocabulary-5/function/g'
 grep -rl 'vocabulary-5' ../test | xargs sed -i 's/vocabulary-5/function/g'
 grep -rl 'vocabulary-5' ../themes | xargs sed -i 's/vocabulary-5/function/g'

 grep -rl 'vocabulary-6' ../modules | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'
 grep -rl 'vocabulary-6' ../test  | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'
 grep -rl 'vocabulary-6' ../themes  | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'

 grep -rl 'vocabulary-7' ../modules | xargs sed -i 's/vocabulary-7/site-report-type/g'
 grep -rl 'vocabulary-7' ../test  | xargs sed -i 's/vocabulary-7/site-report-type/g'
 grep -rl 'vocabulary-7' ../themes  | xargs sed -i 's/vocabulary-7/site-report-type/g'

 grep -rl 'vocabulary-8' ../modules | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'
 grep -rl 'vocabulary-8' ../test  | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'
 grep -rl 'vocabulary-8' ../themes  | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'

 grep -rl 'vocabulary-9' ../modules | xargs sed -i 's/vocabulary-9/purpose/g'
 grep -rl 'vocabulary-9' ../test  | xargs sed -i 's/vocabulary-9/purpose/g'
 grep -rl 'vocabulary-9' ../themes  | xargs sed -i 's/vocabulary-9/purpose/g'
 
 grep -rl 'iteviisit' ../modules | xargs sed -i 's/iteviisit/itevisit/g'
 
 grep -rl 'district_category' ../modules | xargs sed -i 's/district_category/field_district_tags/g'
 grep -rl 'district_category' ../test  | xargs sed -i 's/district_category/field_district_tags/g'
 grep -rl 'district_category' ../themes  | xargs sed -i 's/district_category/field_district_tags/g'

 grep -rl 'district-category' ../modules | xargs sed -i 's/district-category/field-district-tags/g'
 grep -rl 'district-category' ../test  | xargs sed -i 's/district-category/field-district-tags/g'
 grep -rl 'district-category' ../themes  | xargs sed -i 's/district-category/field-district-tags/g'
 
 grep -rl 'field_ftritem_public_summary' ../modules | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'
 grep -rl 'field_ftritem_public_summary' ../test  | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'
 grep -rl 'field_ftritem_public_summary' ../themes  | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'

 grep -rl 'field_ftritem_narrative' ../modules | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'
 grep -rl 'field_ftritem_narrative' ../test  | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'
 grep -rl 'field_ftritem_narrative' ../themes  | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'

#site visit facets
#report type
 grep -rl 'lxcsjuspi4hstsg0c8hcqgwn6vgs7poa' ../modules | xargs sed -i 's/lxcsjuspi4hstsg0c8hcqgwn6vgs7poa/zvp63awjoyvvdtz07s2w0csvlihq2y1t/g'
 grep -rl 'lxcsjuspi4hstsg0c8hcqgwn6vgs7poa' ../test  | xargs sed -i 's/lxcsjuspi4hstsg0c8hcqgwn6vgs7poa/zvp63awjoyvvdtz07s2w0csvlihq2y1t/g'
 grep -rl 'lxcsjuspi4hstsg0c8hcqgwn6vgs7poa' ../themes  | xargs sed -i 's/lxcsjuspi4hstsg0c8hcqgwn6vgs7poa/zvp63awjoyvvdtz07s2w0csvlihq2y1t/g'

 grep -rl 'LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA' ../modules | xargs sed -i 's/LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA/ZVp63AWJOyVvDtZ07S2w0CsVLihq2Y1T/g'
 grep -rl 'LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA' ../test  | xargs sed -i 's/LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA/ZVp63AWJOyVvDtZ07S2w0CsVLihq2Y1T/g'
 grep -rl 'LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA' ../themes  | xargs sed -i 's/LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA/ZVp63AWJOyVvDtZ07S2w0CsVLihq2Y1T/g'

#admin unit
 grep -rl 'amvw0eoro22vgnzwzxrzohrprftqkd3s' ../modules | xargs sed -i 's/amvw0eoro22vgnzwzxrzohrprftqkd3s/qgwmawhpmy9gmywvnah1i9f9mr7uuvon/g'
 grep -rl 'amvw0eoro22vgnzwzxrzohrprftqkd3s' ../test  | xargs sed -i 's/amvw0eoro22vgnzwzxrzohrprftqkd3s/qgwmawhpmy9gmywvnah1i9f9mr7uuvon/g'
 grep -rl 'amvw0eoro22vgnzwzxrzohrprftqkd3s' ../themes  | xargs sed -i 's/amvw0eoro22vgnzwzxrzohrprftqkd3s/qgwmawhpmy9gmywvnah1i9f9mr7uuvon/g'

 grep -rl 'aMVw0EOrO22VgnzwzXrzohRPrftQKd3s' ../modules | xargs sed -i 's/aMVw0EOrO22VgnzwzXrzohRPrftQKd3s/QGwMAwHPmY9GmYwvnaH1I9f9MR7uuVOn/g'
 grep -rl 'aMVw0EOrO22VgnzwzXrzohRPrftQKd3s' ../test  | xargs sed -i 's/aMVw0EOrO22VgnzwzXrzohRPrftQKd3s/QGwMAwHPmY9GmYwvnaH1I9f9MR7uuVOn/g'
 grep -rl 'aMVw0EOrO22VgnzwzXrzohRPrftQKd3s' ../themes  | xargs sed -i 's/aMVw0EOrO22VgnzwzXrzohRPrftQKd3s/QGwMAwHPmY9GmYwvnaH1I9f9MR7uuVOn/g'

#sector
 grep -rl 'ptro3d6zztsp4x2g0recyln6cahmboqp' ../modules | xargs sed -i 's/ptro3d6zztsp4x2g0recyln6cahmboqp/busltvttzvz2gjazy5ioy0ocw7a9lvef/g'
 grep -rl 'ptro3d6zztsp4x2g0recyln6cahmboqp' ../test  | xargs sed -i 's/ptro3d6zztsp4x2g0recyln6cahmboqp/busltvttzvz2gjazy5ioy0ocw7a9lvef/g'
 grep -rl 'ptro3d6zztsp4x2g0recyln6cahmboqp' ../themes  | xargs sed -i 's/ptro3d6zztsp4x2g0recyln6cahmboqp/busltvttzvz2gjazy5ioy0ocw7a9lvef/g'

 grep -rl 'pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp' ../modules | xargs sed -i 's/pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp/bUSltVtTZVZ2GjazY5IOy0ocW7a9lvef/g'
 grep -rl 'pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp' ../test  | xargs sed -i 's/pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp/bUSltVtTZVZ2GjazY5IOy0ocW7a9lvef/g'
 grep -rl 'pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp' ../themes  | xargs sed -i 's/pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp/bUSltVtTZVZ2GjazY5IOy0ocW7a9lvef/g'

#location type
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../modules | xargs sed 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../test  | xargs sed 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../themes  | xargs sed 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'

 grep -rl '1MOwyanJkNRdOpBtS0C089qkom59uMzK' ../modules | xargs sed -i 's/1MOwyanJkNRdOpBtS0C089qkom59uMzK/ZVX0V3QtWaEs31kONoFDIPJXgstytsZp/g'
 grep -rl '1MOwyanJkNRdOpBtS0C089qkom59uMzK' ../test  | xargs sed -i 's/1MOwyanJkNRdOpBtS0C089qkom59uMzK/ZVX0V3QtWaEs31kONoFDIPJXgstytsZp/g'
 grep -rl '1MOwyanJkNRdOpBtS0C089qkom59uMzK' ../themes  | xargs sed -i 's/1MOwyanJkNRdOpBtS0C089qkom59uMzK/ZVX0V3QtWaEs31kONoFDIPJXgstytsZp/g'

#admin unit tags
 grep -rl '3grh78sronbjsbcg4czo3cxhhlem5zk1' ../modules | xargs sed -i 's/3grh78sronbjsbcg4czo3cxhhlem5zk1/kmlwt0izsp7s9xbjxxxx12wr6f45yajh/g'
 grep -rl '3grh78sronbjsbcg4czo3cxhhlem5zk1' ../test  | xargs sed -i 's/3grh78sronbjsbcg4czo3cxhhlem5zk1/kmlwt0izsp7s9xbjxxxx12wr6f45yajh/g'
 grep -rl '3grh78sronbjsbcg4czo3cxhhlem5zk1' ../themes  | xargs sed -i 's/3grh78sronbjsbcg4czo3cxhhlem5zk1/kmlwt0izsp7s9xbjxxxx12wr6f45yajh/g'

 grep -rl '3grH78sRONBJsBCG4czO3CXhhLEm5ZK1' ../modules | xargs sed -i 's/3grH78sRONBJsBCG4czO3CXhhLEm5ZK1/kmlWT0izsp7s9XBJXxxX12wr6f45YajH/g'
 grep -rl '3grH78sRONBJsBCG4czO3CXhhLEm5ZK1' ../test  | xargs sed -i 's/3grH78sRONBJsBCG4czO3CXhhLEm5ZK1/kmlWT0izsp7s9XBJXxxX12wr6f45YajH/g'
 grep -rl '3grH78sRONBJsBCG4czO3CXhhLEm5ZK1' ../themes  | xargs sed -i 's/3grH78sRONBJsBCG4czO3CXhhLEm5ZK1/kmlWT0izsp7s9XBJXxxX12wr6f45YajH/g'

#action item facets
#sector
 grep -rl 'yrre28gatxo7f09ivqpdh2nrr2yja14p' ../modules | xargs sed -i 's/yrre28gatxo7f09ivqpdh2nrr2yja14p/vgafmubwfy611gqfetmf2w2ouh0lsu6v/g'
 grep -rl 'yrre28gatxo7f09ivqpdh2nrr2yja14p' ../test  | xargs sed -i 's/yrre28gatxo7f09ivqpdh2nrr2yja14p/vgafmubwfy611gqfetmf2w2ouh0lsu6v/g'
 grep -rl 'yrre28gatxo7f09ivqpdh2nrr2yja14p' ../themes  | xargs sed -i 's/yrre28gatxo7f09ivqpdh2nrr2yja14p/vgafmubwfy611gqfetmf2w2ouh0lsu6v/g'

 grep -rl 'yrRE28GaTXo7F09IvqpDh2nrR2YJa14p' ../modules | xargs sed -i 's/yrRE28GaTXo7F09IvqpDh2nrR2YJa14p/VgAfMuBWfy611gQFEtMF2w2oUh0lsU6v/g'
 grep -rl 'yrRE28GaTXo7F09IvqpDh2nrR2YJa14p' ../test  | xargs sed -i 's/yrRE28GaTXo7F09IvqpDh2nrR2YJa14p/VgAfMuBWfy611gQFEtMF2w2oUh0lsU6v/g'
 grep -rl 'yrRE28GaTXo7F09IvqpDh2nrR2YJa14p' ../themes  | xargs sed -i 's/yrRE28GaTXo7F09IvqpDh2nrR2YJa14p/VgAfMuBWfy611gQFEtMF2w2oUh0lsU6v/g'

#admin unit
 grep -rl '9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw' ../modules | xargs sed -i 's/9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw/b1vhkatxvr1wtrvkoqwk6oj3yhhqsjr6/g'
 grep -rl '9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw' ../test  | xargs sed -i 's/9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw/b1vhkatxvr1wtrvkoqwk6oj3yhhqsjr6/g'
 grep -rl '9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw' ../themes  | xargs sed -i 's/9v2lgys4yvh3sg0swlgzqrrqnfrk8cpw/b1vhkatxvr1wtrvkoqwk6oj3yhhqsjr6/g'

 grep -rl '9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW' ../modules | xargs sed -i 's/9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW/b1VHKAtXVr1wtrvkOqwK6oj3yHHQsjR6/g'
 grep -rl '9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW' ../test  | xargs sed -i 's/9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW/b1VHKAtXVr1wtrvkOqwK6oj3yHHQsjR6/g'
 grep -rl '9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW' ../themes  | xargs sed -i 's/9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW/b1VHKAtXVr1wtrvkOqwK6oj3yHHQsjR6/g'

#admin unit tags
 grep -rl 'oyhhuvsyko9snzz04k1gjf3icy6l4oem' ../modules | xargs sed -i 's/oyhhuvsyko9snzz04k1gjf3icy6l4oem/k5cp9henh8pxyknsqdoot1yviaemw88s/g'
 grep -rl 'oyhhuvsyko9snzz04k1gjf3icy6l4oem' ../test  | xargs sed -i 's/oyhhuvsyko9snzz04k1gjf3icy6l4oem/k5cp9henh8pxyknsqdoot1yviaemw88s/g'
 grep -rl 'oyhhuvsyko9snzz04k1gjf3icy6l4oem' ../themes  | xargs sed -i 's/oyhhuvsyko9snzz04k1gjf3icy6l4oem/k5cp9henh8pxyknsqdoot1yviaemw88s/g'

 grep -rl 'oYhhuVSykO9snZz04K1gjf3ICy6l4OeM' ../modules | xargs sed -i 's/oYhhuVSykO9snZz04K1gjf3ICy6l4OeM/K5cP9HENH8pXYkNsQdoOT1yViAEmw88S/g'
 grep -rl 'oYhhuVSykO9snZz04K1gjf3ICy6l4OeM' ../test  | xargs sed -i 's/oYhhuVSykO9snZz04K1gjf3ICy6l4OeM/K5cP9HENH8pXYkNsQdoOT1yViAEmw88S/g'
 grep -rl 'oYhhuVSykO9snZz04K1gjf3ICy6l4OeM' ../themes  | xargs sed -i 's/oYhhuVSykO9snZz04K1gjf3ICy6l4OeM/K5cP9HENH8pXYkNsQdoOT1yViAEmw88S/g'

#field trip facets
#admin unit
 grep -rl 'n49vhffodlb6pbfilkpnopsnjcgu17ii' ../modules | xargs sed -i 's/n49vhffodlb6pbfilkpnopsnjcgu17ii/5vkftzsd0zxsh2hrryxbllkpku09xepf/g'
 grep -rl 'n49vhffodlb6pbfilkpnopsnjcgu17ii' ../test  | xargs sed -i 's/n49vhffodlb6pbfilkpnopsnjcgu17ii/5vkftzsd0zxsh2hrryxbllkpku09xepf/g'
 grep -rl 'n49vhffodlb6pbfilkpnopsnjcgu17ii' ../themes  | xargs sed -i 's/n49vhffodlb6pbfilkpnopsnjcgu17ii/5vkftzsd0zxsh2hrryxbllkpku09xepf/g'

 grep -rl 'n49VhFfODLB6pbfilkpnOPSnjCGu17iI' ../modules | xargs sed -i 's/n49VhFfODLB6pbfilkpnOPSnjCGu17iI/5VKFtzsD0ZxSH2HrRyxbLLKpkU09xEpF/g'
 grep -rl 'n49VhFfODLB6pbfilkpnOPSnjCGu17iI' ../test  | xargs sed -i 's/n49VhFfODLB6pbfilkpnOPSnjCGu17iI/5VKFtzsD0ZxSH2HrRyxbLLKpkU09xEpF/g'
 grep -rl 'n49VhFfODLB6pbfilkpnOPSnjCGu17iI' ../themes  | xargs sed -i 's/n49VhFfODLB6pbfilkpnOPSnjCGu17iI/5VKFtzsD0ZxSH2HrRyxbLLKpkU09xEpF/g'

#admin unit tags
 grep -rl 'b62gimkp95sx9aofwy7kvpzd1yvsatgd' ../modules | xargs sed -i 's/b62gimkp95sx9aofwy7kvpzd1yvsatgd/h1khg6fwhb0q1r3rqjhl1cnzgarl8zhi/g'
 grep -rl 'b62gimkp95sx9aofwy7kvpzd1yvsatgd' ../test  | xargs sed -i 's/b62gimkp95sx9aofwy7kvpzd1yvsatgd/h1khg6fwhb0q1r3rqjhl1cnzgarl8zhi/g'
 grep -rl 'b62gimkp95sx9aofwy7kvpzd1yvsatgd' ../themes  | xargs sed -i 's/b62gimkp95sx9aofwy7kvpzd1yvsatgd/h1khg6fwhb0q1r3rqjhl1cnzgarl8zhi/g'

 grep -rl 'b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd' ../modules | xargs sed -i 's/b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd/h1KHg6FwHB0q1r3Rqjhl1CnzGArl8Zhi/g'
 grep -rl 'b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd' ../test  | xargs sed -i 's/b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd/h1KHg6FwHB0q1r3Rqjhl1CnzGArl8Zhi/g'
 grep -rl 'b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd' ../themes  | xargs sed -i 's/b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd/h1KHg6FwHB0q1r3Rqjhl1CnzGArl8Zhi/g'

#images facets
#sector
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../modules | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../test  | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../themes  | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'

 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../modules | xargs sed 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'
 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../test  | xargs sed 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'
 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../themes  | xargs sed 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'

#admin unit
 grep -rl 'p874lkjf183h8nuvpjuzqb0hg1bjebo7' ../modules | xargs sed -i 's/p874lkjf183h8nuvpjuzqb0hg1bjebo7/vnflr7e6kk2k1qasfjvdtdau2g8k7shf/g'
 grep -rl 'p874lkjf183h8nuvpjuzqb0hg1bjebo7' ../test  | xargs sed -i 's/p874lkjf183h8nuvpjuzqb0hg1bjebo7/vnflr7e6kk2k1qasfjvdtdau2g8k7shf/g'
 grep -rl 'p874lkjf183h8nuvpjuzqb0hg1bjebo7' ../themes  | xargs sed -i 's/p874lkjf183h8nuvpjuzqb0hg1bjebo7/vnflr7e6kk2k1qasfjvdtdau2g8k7shf/g'

 grep -rl 'P874lkjf183H8nuvpJUZqB0HG1BJebo7' ../modules | xargs sed -i 's/P874lkjf183H8nuvpJUZqB0HG1BJebo7/vNfLr7E6KK2k1qAsfJvDTDau2G8K7Shf/g'
 grep -rl 'P874lkjf183H8nuvpJUZqB0HG1BJebo7' ../test  | xargs sed -i 's/P874lkjf183H8nuvpJUZqB0HG1BJebo7/vNfLr7E6KK2k1qAsfJvDTDau2G8K7Shf/g'
 grep -rl 'P874lkjf183H8nuvpJUZqB0HG1BJebo7' ../themes  | xargs sed -i 's/P874lkjf183H8nuvpJUZqB0HG1BJebo7/vNfLr7E6KK2k1qAsfJvDTDau2G8K7Shf/g'

#location type
 grep -rl 'kmukkr3hgbsosridavnmakt8c6lbqtoi' ../modules | xargs sed -i 's/kmukkr3hgbsosridavnmakt8c6lbqtoi/fqdjpzy3sqxw8bmmep8qjd8cewdo6qdb/g'
 grep -rl 'kmukkr3hgbsosridavnmakt8c6lbqtoi' ../test  | xargs sed -i 's/kmukkr3hgbsosridavnmakt8c6lbqtoi/fqdjpzy3sqxw8bmmep8qjd8cewdo6qdb/g'
 grep -rl 'kmukkr3hgbsosridavnmakt8c6lbqtoi' ../themes  | xargs sed -i 's/kmukkr3hgbsosridavnmakt8c6lbqtoi/fqdjpzy3sqxw8bmmep8qjd8cewdo6qdb/g'

 grep -rl 'KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi' ../modules | xargs sed -i 's/KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi/FQDjPzY3SqXw8BMMEp8qjd8CeWdo6qDB/g'
 grep -rl 'KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi' ../test  | xargs sed -i 's/KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi/FQDjPzY3SqXw8BMMEp8qjd8CeWdo6qDB/g'
 grep -rl 'KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi' ../themes  | xargs sed -i 's/KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi/FQDjPzY3SqXw8BMMEp8qjd8CeWdo6qDB/g'

#questions facets
#sector
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../modules | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../test  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../themes  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'

 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../modules | xargs sed 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'
 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../test  | xargs sed 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'
 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../themes  | xargs sed 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'

#location type
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../modules | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../test  | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../themes  | xargs sed -i's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'

 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../modules | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'
 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../test  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'
 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../themes  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'

#answer facets
#admin unit
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../modules | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../test  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../themes  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'

 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../modules | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'
 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../test  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'
 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../themes  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'

#location type
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../modules | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../test  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../themes  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'

 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../modules | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'
 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../test  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'
 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../themes  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'

#admin unit facets
#tags
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../modules | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../test  | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../themes  | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'

 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../modules | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'
 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../test  | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'
 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../themes  | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'

#locations facets
#admin unit
 grep -rl 'nyr3gawd0dmh1wd1ctakauodwircyqmx' ../modules | xargs sed -i 's/nyr3gawd0dmh1wd1ctakauodwircyqmx/gmhzobx47hjj3amdz83q3an2arrmqzc8/g'
 grep -rl 'nyr3gawd0dmh1wd1ctakauodwircyqmx' ../test  | xargs sed -i 's/nyr3gawd0dmh1wd1ctakauodwircyqmx/gmhzobx47hjj3amdz83q3an2arrmqzc8/g'
 grep -rl 'nyr3gawd0dmh1wd1ctakauodwircyqmx' ../themes  | xargs sed -i 's/nyr3gawd0dmh1wd1ctakauodwircyqmx/gmhzobx47hjj3amdz83q3an2arrmqzc8/g'

 grep -rl 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' ../modules | xargs sed -i 's/NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX/GMHzOBX47hjj3aMDz83q3aN2arrmqZc8/g'
 grep -rl 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' ../test  | xargs sed -i 's/NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX/GMHzOBX47hjj3aMDz83q3aN2arrmqZc8/g'
 grep -rl 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' ../themes  | xargs sed -i 's/NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX/GMHzOBX47hjj3aMDz83q3aN2arrmqZc8/g'

#location type
 grep -rl 'f1ulpolcdxrjeuarlsg1atilme6kphrd' ../modules | xargs sed -i 's/f1ulpolcdxrjeuarlsg1atilme6kphrd/eimbjf2aft7y0zn2pzxr2swxrtmptukz/g'
 grep -rl 'f1ulpolcdxrjeuarlsg1atilme6kphrd' ../test  | xargs sed -i 's/f1ulpolcdxrjeuarlsg1atilme6kphrd/eimbjf2aft7y0zn2pzxr2swxrtmptukz/g'
 grep -rl 'f1ulpolcdxrjeuarlsg1atilme6kphrd' ../themes  | xargs sed -i 's/f1ulpolcdxrjeuarlsg1atilme6kphrd/eimbjf2aft7y0zn2pzxr2swxrtmptukz/g'

 grep -rl 'F1uLPOlCDXrjeUarLsG1atIlmE6kphRD' ../modules | xargs sed -i 's/F1uLPOlCDXrjeUarLsG1atIlmE6kphRD/eImBjF2Aft7Y0Zn2pZXr2SWXrTmPtukZ/g'
 grep -rl 'F1uLPOlCDXrjeUarLsG1atIlmE6kphRD' ../test  | xargs sed -i 's/F1uLPOlCDXrjeUarLsG1atIlmE6kphRD/eImBjF2Aft7Y0Zn2pZXr2SWXrTmPtukZ/g'
 grep -rl 'F1uLPOlCDXrjeUarLsG1atIlmE6kphRD' ../themes  | xargs sed -i 's/F1uLPOlCDXrjeUarLsG1atIlmE6kphRD/eImBjF2Aft7Y0Zn2pZXr2SWXrTmPtukZ/g'

#admin unit tags
 grep -rl 'j7sj75m1e0yh4lqed6wh7bicfrxi6auz' ../modules | xargs sed -i 's/j7sj75m1e0yh4lqed6wh7bicfrxi6auz/of3xq6up8zpeydbseoenu1jevcqo0xtf/g'
 grep -rl 'j7sj75m1e0yh4lqed6wh7bicfrxi6auz' ../test  | xargs sed -i 's/j7sj75m1e0yh4lqed6wh7bicfrxi6auz/of3xq6up8zpeydbseoenu1jevcqo0xtf/g'
 grep -rl 'j7sj75m1e0yh4lqed6wh7bicfrxi6auz' ../themes  | xargs sed -i 's/j7sj75m1e0yh4lqed6wh7bicfrxi6auz/of3xq6up8zpeydbseoenu1jevcqo0xtf/g'

 grep -rl 'J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ' ../modules | xargs sed -i 's/J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ/oF3Xq6UP8zPEYdbseOEnu1jEvCqo0xTf/g'
 grep -rl 'J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ' ../test  | xargs sed -i 's/J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ/oF3Xq6UP8zPEYdbseOEnu1jEvCqo0xTf/g'
 grep -rl 'J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ' ../themes  | xargs sed -i 's/J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ/oF3Xq6UP8zPEYdbseOEnu1jEvCqo0xTf/g'

#user facets
#department
 grep -rl 'stzddb7m90kfvijko939qn1a7yeyiifr' ../modules | xargs sed -i 's/stzddb7m90kfvijko939qn1a7yeyiifr/6a80ebpg1faxj8hue5jivimdznnqco4c/g'
 grep -rl 'stzddb7m90kfvijko939qn1a7yeyiifr' ../test  | xargs sed -i 's/stzddb7m90kfvijko939qn1a7yeyiifr/6a80ebpg1faxj8hue5jivimdznnqco4c/g'
 grep -rl 'stzddb7m90kfvijko939qn1a7yeyiifr' ../themes  | xargs sed -i 's/stzddb7m90kfvijko939qn1a7yeyiifr/6a80ebpg1faxj8hue5jivimdznnqco4c/g'

 grep -rl 'sTzddB7m90kFViJkO939QN1a7YEYIiFR' ../modules | xargs sed -i 's/sTzddB7m90kFViJkO939QN1a7YEYIiFR/6a80ebpG1FAXJ8HuE5JIvimdZnNQcO4c/g'
 grep -rl 'sTzddB7m90kFViJkO939QN1a7YEYIiFR' ../test  | xargs sed -i 's/sTzddB7m90kFViJkO939QN1a7YEYIiFR/6a80ebpG1FAXJ8HuE5JIvimdZnNQcO4c/g'
 grep -rl 'sTzddB7m90kFViJkO939QN1a7YEYIiFR' ../themes  | xargs sed -i 's/sTzddB7m90kFViJkO939QN1a7YEYIiFR/6a80ebpG1FAXJ8HuE5JIvimdZnNQcO4c/g'

#function
 grep -rl 'djddko7vvouihi8c1c3rssy3hyq80wzm' ../modules | xargs sed -i 's/djddko7vvouihi8c1c3rssy3hyq80wzm/8imagrx8r515tglte5yd0tkd3qnsj1l6/g'
 grep -rl 'djddko7vvouihi8c1c3rssy3hyq80wzm' ../test  | xargs sed -i 's/djddko7vvouihi8c1c3rssy3hyq80wzm/8imagrx8r515tglte5yd0tkd3qnsj1l6/g'
 grep -rl 'djddko7vvouihi8c1c3rssy3hyq80wzm' ../themes  | xargs sed -i 's/djddko7vvouihi8c1c3rssy3hyq80wzm/8imagrx8r515tglte5yd0tkd3qnsj1l6/g'

 grep -rl 'DjDdko7vVOuihI8c1c3RsSY3hYq80wZM' ../modules | xargs sed -i 's/DjDdko7vVOuihI8c1c3RsSY3hYq80wZM/8IMAGrX8R515TGLTE5yd0tkD3QnsJ1L6/g'
 grep -rl 'DjDdko7vVOuihI8c1c3RsSY3hYq80wZM' ../test  | xargs sed -i 's/DjDdko7vVOuihI8c1c3RsSY3hYq80wZM/8IMAGrX8R515TGLTE5yd0tkD3QnsJ1L6/g'
 grep -rl 'DjDdko7vVOuihI8c1c3RsSY3hYq80wZM' ../themes  | xargs sed -i 's/DjDdko7vVOuihI8c1c3RsSY3hYq80wZM/8IMAGrX8R515TGLTE5yd0tkD3QnsJ1L6/g'

#sector
 grep -rl 'zcvka214t8ajde4jiuvzizxqtgkbowor' ../modules | xargs sed -i 's/zcvka214t8ajde4jiuvzizxqtgkbowor/wpar2uu0zwgw50vdtmoxsh8xfgf1uu4g/g'
 grep -rl 'zcvka214t8ajde4jiuvzizxqtgkbowor' ../test  | xargs sed -i 's/zcvka214t8ajde4jiuvzizxqtgkbowor/wpar2uu0zwgw50vdtmoxsh8xfgf1uu4g/g'
 grep -rl 'zcvka214t8ajde4jiuvzizxqtgkbowor' ../themes  | xargs sed -i 's/zcvka214t8ajde4jiuvzizxqtgkbowor/wpar2uu0zwgw50vdtmoxsh8xfgf1uu4g/g'

 grep -rl 'zCvKA214T8ajde4jIuVZiZxqtgKBoWoR' ../modules | xargs sed -i 's/zCvKA214T8ajde4jIuVZiZxqtgKBoWoR/WPAR2uu0ZWgW50vdtmoXsH8XFGf1UU4G/g'
 grep -rl 'zCvKA214T8ajde4jIuVZiZxqtgKBoWoR' ../test  | xargs sed -i 's/zCvKA214T8ajde4jIuVZiZxqtgKBoWoR/WPAR2uu0ZWgW50vdtmoXsH8XFGf1UU4G/g'
 grep -rl 'zCvKA214T8ajde4jIuVZiZxqtgKBoWoR' ../themes  | xargs sed -i 's/zCvKA214T8ajde4jIuVZiZxqtgKBoWoR/WPAR2uu0ZWgW50vdtmoXsH8XFGf1UU4G/g'

#admin unit
 grep -rl 'gdbezfxczac606tzcznsv0athxdj6qsb' ../modules | xargs sed -i 's/gdbezfxczac606tzcznsv0athxdj6qsb/d9ey3srx941uxilwpwr5h2h2jysl0hhv/g'
 grep -rl 'gdbezfxczac606tzcznsv0athxdj6qsb' ../test  | xargs sed -i 's/gdbezfxczac606tzcznsv0athxdj6qsb/d9ey3srx941uxilwpwr5h2h2jysl0hhv/g'
 grep -rl 'gdbezfxczac606tzcznsv0athxdj6qsb' ../themes  | xargs sed -i 's/gdbezfxczac606tzcznsv0athxdj6qsb/d9ey3srx941uxilwpwr5h2h2jysl0hhv/g'

 grep -rl 'GDbEzfxCZAC606tzCznsV0AtHxDj6qsb' ../modules | xargs sed -i 's/GDbEzfxCZAC606tzCznsV0AtHxDj6qsb/D9eY3srx941UXiLwpWR5h2H2JYsL0hhv/g'
 grep -rl 'GDbEzfxCZAC606tzCznsV0AtHxDj6qsb' ../test  | xargs sed -i 's/GDbEzfxCZAC606tzCznsV0AtHxDj6qsb/D9eY3srx941UXiLwpWR5h2H2JYsL0hhv/g'
 grep -rl 'GDbEzfxCZAC606tzCznsV0AtHxDj6qsb' ../themes  | xargs sed -i 's/GDbEzfxCZAC606tzCznsV0AtHxDj6qsb/D9eY3srx941UXiLwpWR5h2H2JYsL0hhv/g'

#admin unit tags
 grep -rl 'kfxn7xn0pe3phzlzfnlu4oh2zaujin99' ../modules | xargs sed -i 's/kfxn7xn0pe3phzlzfnlu4oh2zaujin99/y5vz54hluewkvxibajalnqeezohi01nr/g'
 grep -rl 'kfxn7xn0pe3phzlzfnlu4oh2zaujin99' ../test  | xargs sed -i 's/kfxn7xn0pe3phzlzfnlu4oh2zaujin99/y5vz54hluewkvxibajalnqeezohi01nr/g'
 grep -rl 'kfxn7xn0pe3phzlzfnlu4oh2zaujin99' ../themes  | xargs sed -i 's/kfxn7xn0pe3phzlzfnlu4oh2zaujin99/y5vz54hluewkvxibajalnqeezohi01nr/g'

 grep -rl 'kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99' ../modules | xargs sed -i 's/kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99/Y5VZ54hlUeWkvxIbAjaLNqeEZOhi01Nr/g'
 grep -rl 'kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99' ../test  | xargs sed -i 's/kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99/Y5VZ54hlUeWkvxIbAjaLNqeEZOhi01Nr/g'
 grep -rl 'kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99' ../themes  | xargs sed -i 's/kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99/Y5VZ54hlUeWkvxIbAjaLNqeEZOhi01Nr/g'
