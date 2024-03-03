#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortPlayspaceConfigData.h"
#include "FortPlayspaceConfig.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayspaceConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayspaceConfigData> PlayspaceDataList;
    
public:
    UFortPlayspaceConfig();
};

