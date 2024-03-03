#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "XPDisplayData.h"
#include "AthenaXPDisplayData.generated.h"

UCLASS(Blueprintable)
class UAthenaXPDisplayData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXPDisplayData> DisplayData;
    
public:
    UAthenaXPDisplayData();
};

