#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_PrimaryAssignment.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseItemActorLocation;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DistanceClose;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DistanceFar;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue PercentValueClose;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue PercentValueRegular;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue PercentValueFar;
    
public:
    UFortQueryTest_PrimaryAssignment();
};

