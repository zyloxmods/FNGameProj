#pragma once
#include "CoreMinimal.h"
#include "FortCollectionData.h"
#include "FortCollectionDataFishing.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCollectionDataFishing : public UFortCollectionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwoStarRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreeStarRating;
    
public:
    UFortCollectionDataFishing();
};

