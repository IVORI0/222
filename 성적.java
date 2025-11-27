import numpy as np

# 리스트 NumPy 배열로 변환
score = [69, 66, 50, 85, 88, 76, 90, 59, 53, 95]
score_array = np.array(score)

print("원본 성적 배열:")
print(score_array)
print(f"배열 타입: {type(score_array)}")
print(f"배열 shape: {score_array.shape}\n")

# 60점 이상인 값들만 추출
passing_scores = score_array[score_array >= 60]

print("60점 이상인 성적:")
print(passing_scores)
print(f"\n총 학생 수: {len(score_array)}명")
print(f"합격 학생 수: {len(passing_scores)}명")
print(f"합격률: {len(passing_scores)/len(score_array)*100:.1f}%")

print(f"\n합격 학생 평균: {passing_scores.mean():.2f}점")
print(f"합격 학생 최고점: {passing_scores.max()}점")
print(f"합격 학생 최저점: {passing_scores.min()}점")
