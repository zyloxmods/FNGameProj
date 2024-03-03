#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_AssignmentTypeInterest.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InvalidTypeStartInterest;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InvalidTypeEndInterest;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InvalidTypeTimeBeforeLerp;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InvalidTypeLerpDuration;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ValidTypeStartInterest;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ValidTypeEndInterest;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ValidTypeTimeBeforeLerp;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ValidTypeLerpDuration;
    
public:
    UFortQueryTest_AssignmentTypeInterest();
};

