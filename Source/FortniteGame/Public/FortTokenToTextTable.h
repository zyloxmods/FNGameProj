#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTooltipTokenInfo.h"
#include "FortTokenToTextTable.generated.h"

UCLASS(Blueprintable)
class UFortTokenToTextTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTooltipTokenInfo> TokenInfoList;
    
public:
    UFortTokenToTextTable();
};

