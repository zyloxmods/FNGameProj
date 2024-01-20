#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortBrushSize.h"
#include "Styling/SlateBrush.h"
#include "EFrontEndRewardType.h"
#include "FortRewardNotificationData.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortRewardNotificationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrontEndRewardType RewardType;
    
    UFortRewardNotificationData();
    UFUNCTION(BlueprintCallable)
    bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
};

