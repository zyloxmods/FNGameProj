#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreativeMinimapComponentIconList.generated.h"

class UCreativeMinimapComponentIcon;

UCLASS(Blueprintable)
class UCreativeMinimapComponentIconList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCreativeMinimapComponentIcon*> Icons;
    
public:
    UCreativeMinimapComponentIconList();
};

