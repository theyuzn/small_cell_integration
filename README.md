# Small Cell Integration Project
This is the small cell integration project based on [OSC_DU_High_Rel-H](https://docs.o-ran-sc.org/projects/o-ran-sc-o-du-l2/en/latest/overview.html)


## Architecture
<img src="graph/architecture.png" alt="drawing" width="500"/>

The nFAPI is the network interface between DU-High and OAI pnf.

The main design of our work focuses on the VNF and scheduler embedded in MAC layer in DU.

## Installation
* In this work, the flag `NFAPI=YES` must be set.

```sh
cd l2/build/odu
#clean
make clean_odu MACHINE=BIT64 MODE=FDD NFAPI=YES
make clean_cu MACHINE=BIT64 MODE=FDD NFAPI=YES
make clean_ric MACHINE=BIT64 MODE=FDD NFAPI=YES

#compile
make odu MACHINE=BIT64 MODE=FDD NFAPI=YES
make cu_stub NODE=TEST_STUB MACHINE=BIT64 MODE=FDD NFAPI=YES
make ric_stub NODE=TEST_STUB MACHINE=BIT64 MODE=FDD NFAPI=YES
```

## Execution
The du, cu_stub, ric_stub need to be run.

The OAI gNB in PNF mode also needs to be run. 

* **`du, cu_stub, ric_stub` --> Follow the OCS-DU High guidence**

* **`OAI gNB PNF mode` --> Follow the following guidence**
```sh
# Follow the OAI guide to compile OAI gNB

# Run PNF
```

## [Change Log](./CHANGELOG.md)


## Note

## Contributor
* [MWNL](https://mwnl.ce.ncu.edu.tw)
* [BMW Lab.](https://sites.google.com/view/bmw-lab/home)

| Name               | Email                        |
|  :---------------: | ---------------------------  |
| Advisor            |                              |
| Ray-Guang Cheng    | crg@mail.ntust.edu.tw        |
| Shiann-Tsong Sheu  | stsheu@cc.ncu.edu.tw         |
| Maintainer         |                              |
| Yi-Quan Chen       | b10902109@mail.ntust.edu.tw  |
| Ming-Hong Hsu      | joe888joejoe@gmail.com       |
| Yu-Hsin Chuang     | brandonyuhsin@gmail.com      |


