#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "BattlePassNavigatorTabButton.generated.h"

class UCommonLazyImage;
class UFortBangWrapper_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassNavigatorTabButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* BangWrapper_Seen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UBattlePassNavigatorTabButton();
};

