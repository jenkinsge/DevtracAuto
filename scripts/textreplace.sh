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

echo 'site visit facets'
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

#location type combo action item
 grep -rl '19dqfdk2pfqdjcrh9c971eh0qn9ivhvv' ../modules | xargs sed -i 's/19dqfdk2pfqdjcrh9c971eh0qn9ivhvv/vmgudxene1foox6idk7i2qqlgmo5dkff/g'
 grep -rl '19dqfdk2pfqdjcrh9c971eh0qn9ivhvv' ../test  | xargs sed -i 's/19dqfdk2pfqdjcrh9c971eh0qn9ivhvv/vmgudxene1foox6idk7i2qqlgmo5dkff/g'
 grep -rl '19dqfdk2pfqdjcrh9c971eh0qn9ivhvv' ../themes  | xargs sed -i 's/19dqfdk2pfqdjcrh9c971eh0qn9ivhvv/vmgudxene1foox6idk7i2qqlgmo5dkff/g'

 grep -rl '19dqfDK2pFqdJCRH9C971eH0QN9IVhvV' ../modules | xargs sed -i 's/19dqfDK2pFqdJCRH9C971eH0QN9IVhvV/VMGudXEne1FoOX6IDk7I2qQlgMO5dKFf/g'
 grep -rl '19dqfDK2pFqdJCRH9C971eH0QN9IVhvV' ../test  | xargs sed -i 's/19dqfDK2pFqdJCRH9C971eH0QN9IVhvV/VMGudXEne1FoOX6IDk7I2qQlgMO5dKFf/g'
 grep -rl '19dqfDK2pFqdJCRH9C971eH0QN9IVhvV' ../themes  | xargs sed -i 's/19dqfDK2pFqdJCRH9C971eH0QN9IVhvV/VMGudXEne1FoOX6IDk7I2qQlgMO5dKFf/g'


#location type
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../modules | xargs sed -i 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../test  | xargs sed -i 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'
 grep -rl '1mowyanjknrdopbts0c089qkom59umzk' ../themes  | xargs sed -i 's/1mowyanjknrdopbts0c089qkom59umzk/zvx0v3qtwaes31konofdipjxgstytszp/g'

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

echo 'action item facets'
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

echo 'field trip facets'
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

echo 'images facets'
#sector
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../modules | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../test  | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'
 grep -rl 'qvgb2ckccz2g8sbizployqz5lounyrty' ../themes  | xargs sed -i 's/qvgb2ckccz2g8sbizployqz5lounyrty/zamixbrzoztcsfq5jhokbndhz0x2jsmq/g'

 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../modules | xargs sed -i 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'
 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../test  | xargs sed -i 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'
 grep -rl 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' ../themes  | xargs sed -i 's/QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty/zAMiXbRzozTCsFq5JhOkbnDhz0X2jsMQ/g'

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

#echo 'questions facets'
#sector
# grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../modules | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'
# grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../test  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'
# grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../themes  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/zi03pyfh0haf7sgesfoevliwetm1lf52/g'

# grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../modules | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'
# grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../test  | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'
# grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../themes  | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/Zi03PyFH0HaF7SGesfOevLIwEtM1Lf52/g'

#location type
# grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../modules | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'
# grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../test  | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'
# grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../themes  | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/wkfafyfnzcmqzcsotoz10igyhhzs4lox/g'

# grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../modules | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'
# grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../test  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'
# grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../themes  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/wKFAFyfNzcMQzCsOTOz10igYHhZS4lOX/g'

#echo 'answer facets'
#admin unit
# grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../modules | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'
# grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../test  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'
# grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../themes  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/cujp6qdreq73hkyfo3c0tghvi5elcqps/g'

# grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../modules | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'
# grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../test  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'
# grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../themes  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/CUJP6QDReQ73HKyfO3C0TgHVI5eLcqps/g'

#location type
# grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../modules | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'
# grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../test  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'
# grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../themes  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ew2kucnpkk30amdl1l7o0gcx71ovyb0t/g'

# grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../modules | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'
# grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../test  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'
# grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../themes  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/eW2kuCNPkK30amdl1L7O0gCx71oVYb0T/g'

echo 'admin unit facets'
#tags
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../modules | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../test  | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'
 grep -rl 'l2dluv3aaqmwzo0fi0e7idwplai93anc' ../themes  | xargs sed -i 's/l2dluv3aaqmwzo0fi0e7idwplai93anc/jkgrlcxnxnpzekq0obbaplgfzc0ac0bj/g'

 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../modules | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'
 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../test  | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'
 grep -rl 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' ../themes  | xargs sed -i 's/L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC/jkGrLcxnxnpzEkq0obbaPlGfzC0AC0BJ/g'

echo 'locations facets'
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

echo 'user facets'
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

#Quicktabs
echo 'action item quicktabs'
#sectors
 grep -rl '5Csz93iO16ADnoA8FloxJrpJyd4oeuXM' ../modules | xargs sed -i 's/5Csz93iO16ADnoA8FloxJrpJyd4oeuXM/V8rVAINdIImYYy0NcyegxQUVc1KX2jkr/g'
 grep -rl '5Csz93iO16ADnoA8FloxJrpJyd4oeuXM' ../test  | xargs sed -i 's/5Csz93iO16ADnoA8FloxJrpJyd4oeuXM/V8rVAINdIImYYy0NcyegxQUVc1KX2jkr/g'
 grep -rl '5Csz93iO16ADnoA8FloxJrpJyd4oeuXM' ../themes  | xargs sed -i 's/5Csz93iO16ADnoA8FloxJrpJyd4oeuXM/V8rVAINdIImYYy0NcyegxQUVc1KX2jkr/g'

#admin units
 grep -rl 'LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J' ../modules | xargs sed -i 's/LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J/Lyds2Wo0pasBuW7MOvE7YBfZfH12UWaO/g'
 grep -rl 'LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J' ../test  | xargs sed -i 's/LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J/Lyds2Wo0pasBuW7MOvE7YBfZfH12UWaO/g'
 grep -rl 'LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J' ../themes  | xargs sed -i 's/LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J/Lyds2Wo0pasBuW7MOvE7YBfZfH12UWaO/g'

echo 'admin unit quicktabs'
#categories
 grep -rl '2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB' ../modules | xargs sed -i 's/2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB/bNZk7WmAC7r1B1ru6gX11SG8cj1eV79F/g'
 grep -rl '2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB' ../test  | xargs sed -i 's/2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB/bNZk7WmAC7r1B1ru6gX11SG8cj1eV79F/g'
 grep -rl '2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB' ../themes  | xargs sed -i 's/2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB/bNZk7WmAC7r1B1ru6gX11SG8cj1eV79F/g'

echo 'site visit quicktabs'
#pie
 grep -rl 'rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E' ../modules | xargs sed -i 's/rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E/L1wlXOQ700DUW0mwS9wfWBJ6AAp01Ehe/g'
 grep -rl 'rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E' ../test  | xargs sed -i 's/rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E/L1wlXOQ700DUW0mwS9wfWBJ6AAp01Ehe/g'
 grep -rl 'rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E' ../themes  | xargs sed -i 's/rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E/L1wlXOQ700DUW0mwS9wfWBJ6AAp01Ehe/g'

#bar
 grep -rl '861L2Ty5TEkoFDdWgJgToD51WyYsJx1X' ../modules | xargs sed -i 's/861L2Ty5TEkoFDdWgJgToD51WyYsJx1X/QT0xO7DKFN1Ewx7tPEIe8LJUT3baPWVm/g'
 grep -rl '861L2Ty5TEkoFDdWgJgToD51WyYsJx1X' ../test  | xargs sed -i 's/861L2Ty5TEkoFDdWgJgToD51WyYsJx1X/QT0xO7DKFN1Ewx7tPEIe8LJUT3baPWVm/g'
 grep -rl '861L2Ty5TEkoFDdWgJgToD51WyYsJx1X' ../themes  | xargs sed -i 's/861L2Ty5TEkoFDdWgJgToD51WyYsJx1X/QT0xO7DKFN1Ewx7tPEIe8LJUT3baPWVm/g'

#sectors
 grep -rl 'ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00' ../modules | xargs sed -i 's/ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00/Si1kDb7NTw4DJURGkf9TOE0E7UFTA0u3/g'
 grep -rl 'ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00' ../test  | xargs sed -i 's/ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00/Si1kDb7NTw4DJURGkf9TOE0E7UFTA0u3/g'
 grep -rl 'ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00' ../themes  | xargs sed -i 's/ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00/Si1kDb7NTw4DJURGkf9TOE0E7UFTA0u3/g'

#admin units
 grep -rl 'WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj' ../modules | xargs sed -i 's/WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj/OZtGsTThiNKsFHNH46es0nGIn06SXBlZ/g'
 grep -rl 'WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj' ../test  | xargs sed -i 's/WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj/OZtGsTThiNKsFHNH46es0nGIn06SXBlZ/g'
 grep -rl 'WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj' ../themes  | xargs sed -i 's/WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj/OZtGsTThiNKsFHNH46es0nGIn06SXBlZ/g'

echo 'field trip quicktabs'
#admin units
 grep -rl 'GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q' ../modules | xargs sed -i 's/GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q/OxcEZqbqQiMxRPSfsVPBMHuC81T7BeX6/g'
 grep -rl 'GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q' ../test  | xargs sed -i 's/GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q/OxcEZqbqQiMxRPSfsVPBMHuC81T7BeX6/g'
 grep -rl 'GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q' ../themes  | xargs sed -i 's/GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q/OxcEZqbqQiMxRPSfsVPBMHuC81T7BeX6/g'

echo 'image quicktabs'
#admin units
 grep -rl 'I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot' ../modules | xargs sed -i 's/I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot/e1vRhIHhHWUbnI9c0SaCusbCeB8VZGov/g'
 grep -rl 'I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot' ../test  | xargs sed -i 's/I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot/e1vRhIHhHWUbnI9c0SaCusbCeB8VZGov/g'
 grep -rl 'I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot' ../themes  | xargs sed -i 's/I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot/e1vRhIHhHWUbnI9c0SaCusbCeB8VZGov/g'

#sectors
 grep -rl 'Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C' ../modules | xargs sed -i 's/Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C/Xig4IecjwyfU0YUlz8BbrqRnQz0H4Uq0/g'
 grep -rl 'Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C' ../test  | xargs sed -i 's/Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C/Xig4IecjwyfU0YUlz8BbrqRnQz0H4Uq0/g'
 grep -rl 'Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C' ../themes  | xargs sed -i 's/Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C/Xig4IecjwyfU0YUlz8BbrqRnQz0H4Uq0/g'

echo 'location quicktabs'
#locations
 grep -rl 'BrgqTz0RI0foaWl6JyRKLThax54wObJl' ../modules | xargs sed -i 's/BrgqTz0RI0foaWl6JyRKLThax54wObJl/1yaTvvNAcM0pECkYDX0NBsyOWBLLAr4C/g'
 grep -rl 'BrgqTz0RI0foaWl6JyRKLThax54wObJl' ../test  | xargs sed -i 's/BrgqTz0RI0foaWl6JyRKLThax54wObJl/1yaTvvNAcM0pECkYDX0NBsyOWBLLAr4C/g'
 grep -rl 'BrgqTz0RI0foaWl6JyRKLThax54wObJl' ../themes  | xargs sed -i 's/BrgqTz0RI0foaWl6JyRKLThax54wObJl/1yaTvvNAcM0pECkYDX0NBsyOWBLLAr4C/g'

#admin units
 grep -rl 'ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3' ../modules | xargs sed -i 's/ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3/t2iPMX6P769agipItajJZGBtbVLFVvvr/g'
 grep -rl 'ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3' ../test  | xargs sed -i 's/ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3/t2iPMX6P769agipItajJZGBtbVLFVvvr/g'
 grep -rl 'ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3' ../themes  | xargs sed -i 's/ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3/t2iPMX6P769agipItajJZGBtbVLFVvvr/g'

echo 'user quicktabs'
#sectors
 grep -rl '30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA' ../modules | xargs sed -i 's/30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA/iN1Pr1ilSpiGYL9bieNTINd8eLC4Osa5/g'
 grep -rl '30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA' ../test  | xargs sed -i 's/30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA/iN1Pr1ilSpiGYL9bieNTINd8eLC4Osa5/g'
 grep -rl '30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA' ../themes  | xargs sed -i 's/30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA/iN1Pr1ilSpiGYL9bieNTINd8eLC4Osa5/g'

#admin units
 grep -rl '9uWLzh7AevuAQcAji8VuFmft6mg1m82R' ../modules | xargs sed -i 's/9uWLzh7AevuAQcAji8VuFmft6mg1m82R/T6Kni81HVDF0ANPxwDdZkSOFhcBVfFnI/g'
 grep -rl '9uWLzh7AevuAQcAji8VuFmft6mg1m82R' ../test  | xargs sed -i 's/9uWLzh7AevuAQcAji8VuFmft6mg1m82R/T6Kni81HVDF0ANPxwDdZkSOFhcBVfFnI/g'
 grep -rl '9uWLzh7AevuAQcAji8VuFmft6mg1m82R' ../themes  | xargs sed -i 's/9uWLzh7AevuAQcAji8VuFmft6mg1m82R/T6Kni81HVDF0ANPxwDdZkSOFhcBVfFnI/g'

#echo 'statistics quicktabs'
#admin units
# grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../modules | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/YPqmJ0yFtvjLNiwb12N8bJqUfEXWk78M/g'
# grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../test  | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/YPqmJ0yFtvjLNiwb12N8bJqUfEXWk78M/g'
# grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../themes  | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/YPqmJ0yFtvjLNiwb12N8bJqUfEXWk78M/g'

#admin unit
# grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../modules | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/v1TRB1E2I3O6od1uZYBcwfHpu0ndXUwR/g'
# grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../test  | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/v1TRB1E2I3O6od1uZYBcwfHpu0ndXUwR/g'
# grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../themes  | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/v1TRB1E2I3O6od1uZYBcwfHpu0ndXUwR/g'

echo 'Renaming place to location'
#Place to Location
 grep -rl 'field_place_responsible_person' ../modules | xargs sed -i 's/field_place_responsible_person/field_locat_responsible_person/g'
 grep -rl 'field_place_responsible_person' ../test  | xargs sed -i 's/field_place_responsible_person/field_locat_responsible_person/g'
 grep -rl 'field_place_responsible_person' ../themes  | xargs sed -i 's/field_place_responsible_person/field_locat_responsible_person/g'

 grep -rl 'field-place-responsible-person' ../modules | xargs sed -i 's/field-place-responsible-person/field-locat-responsible-person/g'
 grep -rl 'field-place-responsible-person' ../test  | xargs sed -i 's/field-place-responsible-person/field-locat-responsible-person/g'
 grep -rl 'field-place-responsible-person' ../themes  | xargs sed -i 's/field-place-responsible-person/field-locat-responsible-person/g'

 grep -rl 'devtrac_sitereports_graphs_place' ../modules | xargs sed -i 's/devtrac_sitereports_graphs_place/devtrac_sitereports_graphs_locat/g'
 grep -rl 'devtrac_sitereports_graphs_place' ../test  | xargs sed -i 's/devtrac_sitereports_graphs_place/devtrac_sitereports_graphs_locat/g'
 grep -rl 'devtrac_sitereports_graphs_place' ../themes  | xargs sed -i 's/devtrac_sitereports_graphs_place/devtrac_sitereports_graphs_locat/g'

 grep -rl '/place/' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's|/place/|/location/|g'
 grep -rl '/place/' ../test | xargs sed -i 's|/place/|/location/|g'
 grep -rl '/place/' ../themes | xargs sed -i 's|/place/|/location/|g'

 grep -rl '/place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's|/place|/location|g'
 grep -rl '/place' ../test | xargs sed -i 's|/place|/location|g'
 grep -rl '/place' ../themes | xargs sed -i 's|/place|/location|g'

 grep -rl '_place_' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/_place_/_location_/g'
 grep -rl '_place_' ../test | xargs sed -i 's/_place_/_location_/g'
 grep -rl '_place_' ../themes | xargs sed -i 's/_place_/_location_/g'

 grep -rl '_place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/_place/_location/g'
 grep -rl '_place' ../test | xargs sed -i 's/_place/_location/g'
 grep -rl '_place' ../themes | xargs sed -i 's/_place/_location/g'

 grep -rl 'place_' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/place_/location_/g'
 grep -rl 'place_' ../test | xargs sed -i 's/place_/location_/g'
 grep -rl 'place_' ../themes | xargs sed -i 's/place_/location_/g'

 grep -rl \'place\' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\x27place\x27/\x27location\x27/g'
 grep -rl \'place\' ../test | xargs sed -i 's/\x27place\x27/\x27location\x27/g'
 grep -rl \'place\' ../themes | xargs sed -i 's/\x27place\x27/\x27location\x27/g'

# required change for devtrac_install_additional_modules() function in devtrac.install
 grep -rl \'place\' ../ --include=devtrac.install | xargs sed -i 's/\x27place\x27/\x27location\x27/g'

 grep -rl \'Place\' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\x27Place\x27/\x27Location\x27/g'
 grep -rl \'Place\' ../test | xargs sed -i 's/\x27Place\x27/\x27Location\x27/g'
 grep -rl \'Place\' ../themes | xargs sed -i 's/\x27Place\x27/\x27Location\x27/g'

 grep -rl \"place\" ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\"place\"/\"location\"/g'
 grep -rl \"place\" ../test | xargs sed -i 's/\"place\"/\"location\"/g'
 grep -rl \"place\" ../themes | xargs sed -i 's/\"place\"/\"location\"/g'

 grep -rl 'placetype' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/placetype/locationtype/g'
 grep -rl 'placetype' ../test | xargs sed -i 's/placetype/locationtype/g'
 grep -rl 'placetype' ../themes | xargs sed -i 's/placetype/locationtype/g'

 grep -rl 'Placetype' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/Placetype/Locationtype/g'
 grep -rl 'Placetype' ../test | xargs sed -i 's/Placetype/Locationtype/g'
 grep -rl 'Placetype' ../themes | xargs sed -i 's/Placetype/Locationtype/g'

 grep -rl 'PlaceType' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/PlaceType/LocationType/g'
 grep -rl 'PlaceType' ../test | xargs sed -i 's/PlaceType/LocationType/g'
 grep -rl 'PlaceType' ../themes | xargs sed -i 's/PlaceType/LocationType/g'

 grep -rl 'placenid' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/placenid/locationnid/g'
 grep -rl 'placenid' ../test | xargs sed -i 's/placenid/locationnid/g'
 grep -rl 'placenid' ../themes | xargs sed -i 's/placenid/locationnid/g'

 grep -rl 'addplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/addplace/addlocation/g'
 grep -rl 'addplace' ../test | xargs sed -i 's/addplace/addlocation/g'
 grep -rl 'addplace' ../themes | xargs sed -i 's/addplace/addlocation/g'

 grep -rl 'updateplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/updateplace/updatelocation/g'
 grep -rl 'updateplace' ../test | xargs sed -i 's/updateplace/updatelocation/g'
 grep -rl 'updateplace' ../themes | xargs sed -i 's/updateplace/updatelocation/g'

 grep -rl '\$place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\$place/\$location/g'
 grep -rl '\$place' ../test | xargs sed -i 's/\$place/\$location/g'
 grep -rl '\$place' ../themes | xargs sed -i 's/\$place/\$location/g'

 grep -rl 'respplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/respplace/resplocation/g'
 grep -rl 'respplace' ../test | xargs sed -i 's/respplace/resplocation/g'
 grep -rl 'respplace' ../themes | xargs sed -i 's/respplace/resplocation/g'

 grep -rl '\-place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/-place/-location/g'
 grep -rl '\-place' ../test | xargs sed -i 's/-place/-location/g'
 grep -rl '\-place' ../themes | xargs sed -i 's/-place/-location/g'

 grep -rl 'placeid' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/placeid/locationid/g'
 grep -rl 'placeid' ../test | xargs sed -i 's/placeid/locationid/g'
 grep -rl 'placeid' ../themes | xargs sed -i 's/placeid/locationid/g'

 grep -rl '\$tpplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\$tpplace/\$tplocation/g'
 grep -rl '\$tpplace' ../test | xargs sed -i 's/\$tpplace/\$tplocation/g'
 grep -rl '\$tpplace' ../themes | xargs sed -i 's/\$tpplace/\$tplocation/g'

 grep -rl '\$tplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\$tplace/\$tlocation/g'
 grep -rl '\$tplace' ../test | xargs sed -i 's/\$tplace/\$tlocation/g'
 grep -rl '\$tplace' ../themes | xargs sed -i 's/\$tplace/\$tlocation/g'

 grep -rl 'findplace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/findplace/findlocation/g'
 grep -rl 'findplace' ../test | xargs sed -i 's/findplace/findlocation/g'
 grep -rl 'findplace' ../themes | xargs sed -i 's/findplace/findlocation/g'

 grep -rl 'place\[' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/place\[/location\[/g'
 grep -rl 'place\[' ../test | xargs sed -i 's/place\[/location\[/g'
 grep -rl 'place\[' ../themes | xargs sed -i 's/place\[/location\[/g'

 grep -rl 'addPlace' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/addPlace/addLocation/g'
 grep -rl 'addPlace' ../test | xargs sed -i 's/addPlace/addLocation/g'
 grep -rl 'addPlace' ../themes | xargs sed -i 's/addPlace/addLocation/g'

 grep -rl 'place content' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/place content/location content/g'
 grep -rl 'place content' ../test | xargs sed -i 's/place content/location content/g'
 grep -rl 'place content' ../themes | xargs sed -i 's/place content/location content/g'

 grep -rl '|place|' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/|place|/|location|/g'
 grep -rl '|place|' ../test | xargs sed -i 's/|place|/|location|/g'
 grep -rl '|place|' ../themes | xargs sed -i 's/|place|/|location|/g'

 grep -rl '\[\] = place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\[\] = place/\[\] = location/g'
 grep -rl '\[\] = place' ../test | xargs sed -i 's/\[\] = place/\[\] = location/g'
 grep -rl '\[\] = place' ../themes | xargs sed -i 's/\[\] = place/\[\] = location/g'

 grep -rl ':place' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/:place/:location/g'
 grep -rl ':place' ../test | xargs sed -i 's/:place/:location/g'
 grep -rl ':place' ../themes | xargs sed -i 's/:place/:location/g'

 grep -rl 'relocation' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/relocation/replace/g'
 grep -rl 'relocation' ../test | xargs sed -i 's/relocation/replace/g'
 grep -rl 'relocation' ../themes | xargs sed -i 's/relocation/replace/g'

 mv ../modules/custom/devtrac_imports/data/placetype.xml ../modules/custom/devtrac_imports/data/locationtype.xml
 mv ../modules/custom/devtrac_imports/data/placetype.csv ../modules/custom/devtrac_imports/data/locationtype.csv

 mv ../modules/custom/devtrac_imports/includes/devtrac_imports_placetype.inc ../modules/custom/devtrac_imports/includes/devtrac_imports_locationtype.inc
 mv ../modules/custom/devtrac_imports/includes/devtrac_imports_placetype_icons.inc ../modules/custom/devtrac_imports/includes/devtrac_imports_locationtype_icons.inc
 mv ../modules/custom/devtrac_imports/includes/devtrac_imports_placetype_level0.inc ../modules/custom/devtrac_imports/includes/devtrac_imports_locationtype_level0.inc
 mv ../modules/custom/devtrac_imports/includes/devtrac_imports_placetype_level1.inc ../modules/custom/devtrac_imports/includes/devtrac_imports_locationtype_level1.inc
 mv ../modules/custom/devtrac_imports/includes/devtrac_imports_placetype_level2.inc ../modules/custom/devtrac_imports/includes/devtrac_imports_locationtype_level2.inc

 mv ../modules/custom/devtrac7/devtrac7_place.inc ../modules/custom/devtrac7/devtrac7_location.inc

 mv ../themes/devtrac_classic/images/summary-icon-placetype.png ../themes/devtrac_classic/images/summary-icon-locationtype.png

echo 'Renaming Devtrac Site Visit Answers block'
 grep -rl 'devtrac_sitevisit_answer_subjects' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/devtrac_sitevisit_answer_subjects/devtrac_sitevisit_answer_sectors/g'
 grep -rl 'devtrac_sitevisit_answer_subjects' ../test | xargs sed -i 's/devtrac_sitevisit_answer_subjects/devtrac_sitevisit_answer_sectors/g'
 grep -rl 'devtrac_sitevisit_answer_subjects' ../themes | xargs sed -i 's/devtrac_sitevisit_answer_subjects/devtrac_sitevisit_answer_sectors/g'

echo 'Renaming questions and answers indices'
#answers
 grep -rl 'search_api@answers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'
 grep -rl 'search_api@answers' ../test | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'
 grep -rl 'search_api@answers' ../themes | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'

 grep -rl 'features\[search_api_index\]\[\] = answers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/features\[search_api_index\]\[\] = answers/features\[search_api_index\]\[\] = devtrac_solr_answers_index/g'
 grep -rl 'features\[search_api_index\]\[\] = answers' ../test | xargs sed -i 's/features\[search_api_index\]\[\] = answers/features\[search_api_index\]\[\] = devtrac_solr_answers_index/g'
 grep -rl 'features\[search_api_index\]\[\] = answers' ../themes | xargs sed -i 's/features\[search_api_index\]\[\] = answers/features\[search_api_index\]\[\] = devtrac_solr_answers_index/g'

 grep -rl "\$items\['answers'\]" ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\$items\[\x27answers\x27\]/\$items\[\x27devtrac_solr_answers_index\x27\]/g'
 grep -rl "\$items\['answers'\]" ../test | xargs sed -i 's/\$items\[\x27answers\x27\]/\$items\[\x27devtrac_solr_answers_index\x27\]/g'
 grep -rl "\$items\['answers'\]" ../themes | xargs sed -i 's/\$items\[\x27answers\x27\]/\$items\[\x27devtrac_solr_answers_index\x27\]/g'

 grep -rl '"machine_name" : "answers"' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/"machine_name" : "answers"/"machine_name" : "devtrac_solr_answers_index"/g'
 grep -rl '"machine_name" : "answers"' ../test | xargs sed -i 's/"machine_name" : "answers"/"machine_name" : "devtrac_solr_answers_index"/g'
 grep -rl '"machine_name" : "answers"' ../themes | xargs sed -i 's/"machine_name" : "answers"/"machine_name" : "devtrac_solr_answers_index"/g'

 grep -rl 'search_api_index_answers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api_index_answers/search_api_index_devtrac_solr_answers_index/g'
 grep -rl 'search_api_index_answers' ../test | xargs sed -i 's/search_api_index_answers/search_api_index_devtrac_solr_answers_index/g'
 grep -rl 'search_api_index_answers' ../themes | xargs sed -i 's/search_api_index_answers/search_api_index_devtrac_solr_answers_index/g'

 grep -rl 'search_api\/index\/answers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api\/index\/answers/search_api\/index\/devtrac_solr_answers_index/g'
 grep -rl 'search_api\/index\/answers' ../test | xargs sed -i 's/search_api\/index\/answers/search_api\/index\/devtrac_solr_answers_index/g'
 grep -rl 'search_api\/index\/answers' ../themes | xargs sed -i 's/search_api\/index\/answers/search_api\/index\/devtrac_solr_answers_index/g'

 grep -rl 'search_api@answers' ../ --include=devtrac.install | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'

 grep -rl 'facetapi-facet-search-apianswers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/facetapi-facet-search-apianswers/facetapi-facet-search-apidevtrac-solr-answers-index/g'
 grep -rl 'facetapi-facet-search-apianswers' ../test | xargs sed -i 's/facetapi-facet-search-apianswers/facetapi-facet-search-apidevtrac-solr-answers-index/g'
 grep -rl 'facetapi-facet-search-apianswers' ../themes | xargs sed -i 's/facetapi-facet-search-apianswers/facetapi-facet-search-apidevtrac-solr-answers-index/g'

 grep -rl 'search_api@answers' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'
 grep -rl 'search_api@answers' ../test | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'
 grep -rl 'search_api@answers' ../themes | xargs sed -i 's/search_api@answers/search_api@devtrac_solr_answers_index/g'

echo 'answer facets'
#admin unit
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../modules | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/dj7sxo5xpjcr9ic43sk0gzdsaotiavip/g'
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../test  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/dj7sxo5xpjcr9ic43sk0gzdsaotiavip/g'
 grep -rl 'n08gih08ukiw30y73lucrvcs3tdwojf0' ../themes  | xargs sed -i 's/n08gih08ukiw30y73lucrvcs3tdwojf0/dj7sxo5xpjcr9ic43sk0gzdsaotiavip/g'

 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../modules | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/DJ7sXo5XPjCr9iC43sk0GZdsaOtIAvip/g'
 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../test  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/DJ7sXo5XPjCr9iC43sk0GZdsaOtIAvip/g'
 grep -rl 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0' ../themes  | xargs sed -i 's/N08gIh08uKIW30Y73lucrvcS3TdWOjF0/DJ7sXo5XPjCr9iC43sk0GZdsaOtIAvip/g'

#location type
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../modules | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ybbyesmkrymgn7ij9n29wrtjviyfhtyi/g'
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../test  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ybbyesmkrymgn7ij9n29wrtjviyfhtyi/g'
 grep -rl 'pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv' ../themes  | xargs sed -i 's/pafqvo6lfcmew1sqgy8d2nzm6kt7n8tv/ybbyesmkrymgn7ij9n29wrtjviyfhtyi/g'

 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../modules | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/YbByEsmKRYMGN7Ij9n29wrTjViYfHTYI/g'
 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../test  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/YbByEsmKRYMGN7Ij9n29wrTjViYfHTYI/g'
 grep -rl 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' ../themes  | xargs sed -i 's/paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV/YbByEsmKRYMGN7Ij9n29wrTjViYfHTYI/g'

#date created
 grep -rl 'ofxuzvvxp7anyivbx2gfb4goepganblo' ../modules | xargs sed -i 's/ofxuzvvxp7anyivbx2gfb4goepganblo/imhzxhpdo1hnn7ihjg5igaxtgcf05ckj/g'
 grep -rl 'ofxuzvvxp7anyivbx2gfb4goepganblo' ../test  | xargs sed -i 's/ofxuzvvxp7anyivbx2gfb4goepganblo/imhzxhpdo1hnn7ihjg5igaxtgcf05ckj/g'
 grep -rl 'ofxuzvvxp7anyivbx2gfb4goepganblo' ../themes  | xargs sed -i 's/ofxuzvvxp7anyivbx2gfb4goepganblo/imhzxhpdo1hnn7ihjg5igaxtgcf05ckj/g'

 grep -rl 'OfXUzvVxP7aNYIVbx2GFb4gOePGANblo' ../modules | xargs sed -i 's/OfXUzvVxP7aNYIVbx2GFb4gOePGANblo/ImHzXHpdO1hNn7IHjg5Igaxtgcf05Ckj/g'
 grep -rl 'OfXUzvVxP7aNYIVbx2GFb4gOePGANblo' ../test  | xargs sed -i 's/OfXUzvVxP7aNYIVbx2GFb4gOePGANblo/ImHzXHpdO1hNn7IHjg5Igaxtgcf05Ckj/g'
 grep -rl 'OfXUzvVxP7aNYIVbx2GFb4gOePGANblo' ../themes  | xargs sed -i 's/OfXUzvVxP7aNYIVbx2GFb4gOePGANblo/ImHzXHpdO1hNn7IHjg5Igaxtgcf05Ckj/g'

echo 'answer quicktabs'
#admin units
 grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../modules | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/g781PjhX8RMA0TlDLP15tn9zZ1GJ3OHM/g'
 grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../test  | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/g781PjhX8RMA0TlDLP15tn9zZ1GJ3OHM/g'
 grep -rl 'cpORxGhbEE3EgBKlb2EF30fhH82rNEvD' ../themes  | xargs sed -i 's/cpORxGhbEE3EgBKlb2EF30fhH82rNEvD/g781PjhX8RMA0TlDLP15tn9zZ1GJ3OHM/g'

#admin unit
 grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../modules | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/OqPsikE2S9L1CYaEi0C91efMX9H9UO1L/g'
 grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../test  | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/OqPsikE2S9L1CYaEi0C91efMX9H9UO1L/g'
 grep -rl 'WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ' ../themes  | xargs sed -i 's/WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ/OqPsikE2S9L1CYaEi0C91efMX9H9UO1L/g'

#date created
 grep -rl 'bi8GwPIyHkgd30qiOlR3t7O4k4B10ing' ../modules | xargs sed -i 's/bi8GwPIyHkgd30qiOlR3t7O4k4B10ing/GXVwcgLgaOnPccinkp3pjJO4EBN9hXLq/g'
 grep -rl 'bi8GwPIyHkgd30qiOlR3t7O4k4B10ing' ../test  | xargs sed -i 's/bi8GwPIyHkgd30qiOlR3t7O4k4B10ing/GXVwcgLgaOnPccinkp3pjJO4EBN9hXLq/g'
 grep -rl 'bi8GwPIyHkgd30qiOlR3t7O4k4B10ing' ../themes  | xargs sed -i 's/bi8GwPIyHkgd30qiOlR3t7O4k4B10ing/GXVwcgLgaOnPccinkp3pjJO4EBN9hXLq/g'

#date created
 grep -rl '1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM' ../modules | xargs sed -i 's/1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM/hB4DN8E1YbtyaT9UqU2PuzgS1gk0A3as/g'
 grep -rl '1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM' ../test  | xargs sed -i 's/1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM/hB4DN8E1YbtyaT9UqU2PuzgS1gk0A3as/g'
 grep -rl '1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM' ../themes  | xargs sed -i 's/1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM/hB4DN8E1YbtyaT9UqU2PuzgS1gk0A3as/g'

#questions
 grep -rl 'search_api@questions' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api@questions/search_api@devtrac_solr_questions_index/g'
 grep -rl 'search_api@questions' ../test | xargs sed -i 's/search_api@questions/search_api@devtrac_solr_questions_index/g'
 grep -rl 'search_api@questions' ../themes | xargs sed -i 's/search_api@questions/search_api@devtrac_solr_questions_index/g'

 grep -rl 'features\[search_api_index\]\[\] = questions' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/features\[search_api_index\]\[\] = questions/features\[search_api_index\]\[\] = devtrac_solr_questions_index/g'
 grep -rl 'features\[search_api_index\]\[\] = questions' ../test | xargs sed -i 's/features\[search_api_index\]\[\] = questions/features\[search_api_index\]\[\] = devtrac_solr_questions_index/g'
 grep -rl 'features\[search_api_index\]\[\] = questions' ../themes | xargs sed -i 's/features\[search_api_index\]\[\] = questions/features\[search_api_index\]\[\] = devtrac_solr_questions_index/g'

 grep -rl "\$items\['questions'\]" ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/\$items\[\x27questions\x27\]/\$items\[\x27devtrac_solr_questions_index\x27\]/g'
 grep -rl "\$items\['questions'\]" ../test | xargs sed -i 's/\$items\[\x27questions\x27\]/\$items\[\x27devtrac_solr_questions_index\x27\]/g'
 grep -rl "\$items\['questions'\]" ../themes | xargs sed -i 's/\$items\[\x27questions\x27\]/\$items\[\x27devtrac_solr_questions_index\x27\]/g'

 grep -rl '"machine_name" : "questions"' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/"machine_name" : "questions"/"machine_name" : "devtrac_solr_questions_index"/g'
 grep -rl '"machine_name" : "questions"' ../test | xargs sed -i 's/"machine_name" : "questions"/"machine_name" : "devtrac_solr_questions_index"/g'
 grep -rl '"machine_name" : "questions"' ../themes | xargs sed -i 's/"machine_name" : "questions"/"machine_name" : "devtrac_solr_questions_index"/g'

 grep -rl 'search_api_index_questions' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api_index_questions/search_api_index_devtrac_solr_questions_index/g'
 grep -rl 'search_api_index_questions' ../test | xargs sed -i 's/search_api_index_questions/search_api_index_devtrac_solr_questions_index/g'
 grep -rl 'search_api_index_questions' ../themes | xargs sed -i 's/search_api_index_questions/search_api_index_devtrac_solr_questions_index/g'

 grep -rl 'search_api\/index\/questions' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/search_api\/index\/questions/search_api\/index\/devtrac_solr_questions_index/g'
 grep -rl 'search_api\/index\/questions' ../test | xargs sed -i 's/search_api\/index\/questions/search_api\/index\/devtrac_solr_questions_index/g'
 grep -rl 'search_api\/index\/questions' ../themes | xargs sed -i 's/search_api\/index\/questions/search_api\/index\/devtrac_solr_questions_index/g'

 grep -rl 'search_api@questions' ../ --include=devtrac.install | xargs sed -i 's/search_api@questions/search_api@devtrac_solr_questions_index/g'

 grep -rl 'facetapi-facet-search-apiquestions' ../modules --exclude-dir=../modules/contrib | xargs sed -i 's/facetapi-facet-search-apiquestions/facetapi-facet-search-apidevtrac-solr-questions-index/g'
 grep -rl 'facetapi-facet-search-apiquestions' ../test | xargs sed -i 's/facetapi-facet-search-apiquestions/facetapi-facet-search-apidevtrac-solr-questions-index/g'
 grep -rl 'facetapi-facet-search-apiquestions' ../themes | xargs sed -i 's/facetapi-facet-search-apiquestions/facetapi-facet-search-apidevtrac-solr-questions-index/g'

echo 'questions facets'
#sector
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../modules | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/wskpv7ane2zbgugl28pkzfyidrzywmoc/g'
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../test  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/wskpv7ane2zbgugl28pkzfyidrzywmoc/g'
 grep -rl 'fsx63uliwbaiwskuqwaksqmetz0lfzxq' ../themes  | xargs sed -i 's/fsx63uliwbaiwskuqwaksqmetz0lfzxq/wskpv7ane2zbgugl28pkzfyidrzywmoc/g'

 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../modules | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/WskPV7aNe2ZbGUgL28PkzfYIdrzywMoc/g'
 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../test  | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/WskPV7aNe2ZbGUgL28PkzfYIdrzywMoc/g'
 grep -rl 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' ../themes  | xargs sed -i 's/fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq/WskPV7aNe2ZbGUgL28PkzfYIdrzywMoc/g'

#location type
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../modules | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/6axbeoxazcfhac6duvw9bsqatwpoikcx/g'
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../test  | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/6axbeoxazcfhac6duvw9bsqatwpoikcx/g'
 grep -rl 'yttgmzsted723wjneg6ebrh6pzk1shjp' ../themes  | xargs sed -i 's/yttgmzsted723wjneg6ebrh6pzk1shjp/6axbeoxazcfhac6duvw9bsqatwpoikcx/g'

 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../modules | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/6axBEoXAzcFhAC6dUvw9bsQATWPoikcX/g'
 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../test  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/6axBEoXAzcFhAC6dUvw9bsQATWPoikcX/g'
 grep -rl 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' ../themes  | xargs sed -i 's/YtTGmzsTed723wjNeg6EbRh6pzk1SHJP/6axBEoXAzcFhAC6dUvw9bsQATWPoikcX/g'
