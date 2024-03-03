#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSurvivorData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortSurvivorData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorFemaleFirstNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorMaleFirstNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorFemaleLastNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorMaleLastNameData;
    
public:
    UFortSurvivorData();
};

