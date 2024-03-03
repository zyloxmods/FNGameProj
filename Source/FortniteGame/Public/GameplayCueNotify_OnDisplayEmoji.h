#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCueNotify_OnShowEmoji.h"
#include "GameplayCueNotify_OnDisplayEmoji.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UGameplayCueNotify_OnDisplayEmoji : public UGameplayCueNotify_OnShowEmoji {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationOffset;
    
public:
    UGameplayCueNotify_OnDisplayEmoji();
};

