It is Test Code.

## NF dependencies and ports

| NF | Exposed Ports | Dependencies | Dependencies URI |
|:-:|:-:|:-:|:-:|
| amf | 8000 | nrf | nrfUri: https://nrf:8000 |
| ausf | 8000 | nrf | nrfUri: https://nrf:8000 |
| nrf | 8000 | db | MongoDBUrl: mongodb://db:27017 |
| nssf | 8000 | nrf | nrfUri: https://nrf:8000/,<br/>nrfId: https://nrf:8000/nnrf-nfm/v1/nf-instances |
| pcf | 8000 | nrf | nrfUri: https://nrf:8000 |
| smf | 8000 | nrf, upf | nrfUri: https://nrf:8000,<br/>node_id: upf1, node_id: upf2, node_id: upf3 |
| udm | 8000 | nrf | nrfUri: https://nrf:8000 |
| udr | 8000 | nrf, db | nrfUri: https://nrf:8000,<br/>url: mongodb://db:27017 |
| n3iwf | N/A | amf, smf, upf |  |
| upf1 | N/A | pfcp, gtpu, apn | pfcp: upf1, gtpu: upf1, apn: internet |
| upf2 | N/A | pfcp, gtpu, apn | pfcp: upf2, gtpu: upf2, apn: internet |
| upfb (ulcl) | N/A | pfcp, gtpu, apn | pfcp: upfb, gtpu: upfb, apn: intranet |
| webui | 5000 | db | MongoDBUrl: mongodb://db:27017  |
