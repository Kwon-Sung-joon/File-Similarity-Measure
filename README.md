# ***File-Similarity-Measure***


----------------------------

## 멤버이름 : 
          권성준, 신다연
          
          
----------------------------

## 담당 파트 : 
          권성준 : 개발, QA(테스터), ppt제작
         신다연 : 개발, 디버깅, 문서작업
         
         
----------------------------     

## 프로젝트 소개 : 
 SHA-1(보안해시알고리즘)을 이용해 각 파일의 해시값을 구해 파일의 유사도를 측정해주는 프로그램  


----------------------------       

## Diagram
<div>
          <img width="900" src="https://user-images.githubusercontent.com/43159901/69979077-f50cd200-1570-11ea-83d2-adc59d062766.png">
          먼저 비교할 두 파일을 청크 사이즈만큼 읽어 파일을 나누어 준다.
          생성된 여러 파일들의 해쉬값을 SHA1를 이용하여 구한다. 
          SHA1 알고리즘을 이용하기 때문에 파일의 내용이 같다면 같은 해쉬값이 생성되며, 
          생성된 해쉬 값들을 비교하여 두 파일의 유사도를 측정한다.


----------------------------

## 사용방법:

<div>   
          <strong>***Step1***</strong>
          </br>      
          <strong><파일1> a.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980744-29ce5880-1574-11ea-9e98-93bb1f8008d9.PNG">
          </br>
          <strong><파일2> a.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980772-4074af80-1574-11ea-97a0-c20e743e06e7.PNG">
          </br>
          <strong><파일3> b.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980809-51bdbc00-1574-11ea-9a4a-c6bcdce84205.PNG">
          </br>
          <strong>--같은 파일, 다른 파일의 예시를 위해 파일1과 파일2는 같은 파일, 파일3은 다른 파일을 예시로 든다. </strong>
          </br>


----------------------------

 
<div>   
          <strong>***Step2-1***</strong>
          </br>
          <strong><파일1>과 <파일2>의 유사도 </strong>
          </br>
          <img width="500" src="https://user-images.githubusercontent.com/43159901/69982189-33a58b00-1577-11ea-9bd6-ad74e561c3f1.PNG">
          </br>
          <strong><파일1>과 <파일2>의 유사도를 측정하는 데 생성된 파일.</strong>
          </br>
          <img width="150" src="https://user-images.githubusercontent.com/43159901/69982319-81ba8e80-1577-11ea-8f77-4ed68b36d520.PNG">
          </br>

----------------------------    

<div>   
          </br>
          <strong>***Step2-2***</strong>
          </br>
          <strong><파일1>과 <파일3>의 유사도 </strong>
          </br>
          <img width="500" src="https://user-images.githubusercontent.com/43159901/69982548-0dccb600-1578-11ea-993b-1c9c24f6765b.PNG">
          </br>
          <strong><파일1>과 <파일3>의 유사도를 측정하는 데 생성된 파일.</strong>
          </br>
          <img width="150" src="https://user-images.githubusercontent.com/43159901/69982597-32c12900-1578-11ea-83cd-7b55f2dcccfe.PNG">
          </br>

----------------------------   

<div>   
          </br>
          <strong>***Step3***</strong>
          </br>
          <strong><파일1>과 <파일3>의 결과분석 </strong>
          </br>
          <strong><a.c.005>, <c.c.005>의 결과분석 </strong>
          </br>
          <strong><a.c.005></strong>
          </br>                    
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69982774-96e3ed00-1578-11ea-93c7-a35f1ca951ac.PNG">
          <strong><c.c.005></strong>
          </br>                                
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69982849-bf6be700-1578-11ea-93d2-abd895507628.PNG">
          </br>

----------------------------   


## 개발 결과물의 필요성 및 활용방안 : 
  대회나 과제검사, 시험 후 답안지검사에 있어 유사도를 측정해 형평성에 어긋난 행위를 한 사람을 평가에서 제외시켜야 하는 일은 너무 당연하고 꼭 필요한 일이다. 하지만 많은 참가자 혹은 학생들의 제출물을 일일이 하나하나 검사하는 일은 매우 번거롭고 많은 시간을 투자해야 하는 일이다. 파일들만 입력해서 그 유사도를 측정해 수치를 알려주는 프로그램이 절실히 필요하다. File-Similarity-Measure은 학교에서 조교님이나 교수님께서 학생들의 과제에 대한 유사도나 시험이 끝난 후 제출한 답안지의 유사도를 검사해 컨닝의 유무를 판단할 때 사용할 수 있고, 대회가 열렸을 때 대회 참가자들끼리의 프로젝트를 비교해 공평성과 형평성에 어긋난 행동을 한 참가자가 있는지 여부를 판단할 때 사용할 수 있다.  



