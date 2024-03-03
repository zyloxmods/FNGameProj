#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAthenaAIBotCosmeticData.generated.h"

class UFortAthenaAIBotCosmeticLibraryData;

UCLASS(Blueprintable)
class UFortAthenaAIBotCosmeticData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;
    
public:
    UFortAthenaAIBotCosmeticData();
};

