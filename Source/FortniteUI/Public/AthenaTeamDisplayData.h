#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaTeamDisplayInfo.h"
#include "AthenaTeamDisplayData.generated.h"

UCLASS(Blueprintable)
class UAthenaTeamDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaTeamDisplayInfo> SquadStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaTeamDisplayInfo DefaultStyle;
    
public:
    UAthenaTeamDisplayData();
};

