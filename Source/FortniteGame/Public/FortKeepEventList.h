#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KeepEventInfo.h"
#include "FortKeepEventList.generated.h"

UCLASS(Blueprintable)
class UFortKeepEventList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeepEventInfo> Events;
    
    UFortKeepEventList();
    UFUNCTION(BlueprintCallable)
    FText GetEventDescription(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    FKeepEventInfo GetEvent(int32 idx);
    
};

