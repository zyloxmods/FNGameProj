#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaQuickChatLeafEntry.h"
#include "AthenaQuickChatBank.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaQuickChatBank : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaQuickChatLeafEntry> ChatOptions;
    
public:
    UAthenaQuickChatBank();
};

