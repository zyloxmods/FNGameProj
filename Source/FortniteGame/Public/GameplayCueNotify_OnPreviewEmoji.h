#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCueNotify_OnShowEmoji.h"
#include "GameplayCueNotify_OnPreviewEmoji.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UGameplayCueNotify_OnPreviewEmoji : public UGameplayCueNotify_OnShowEmoji {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialVelocityOffset;
    
public:
    UGameplayCueNotify_OnPreviewEmoji();
};

