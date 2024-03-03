#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "AthenaMapScreenContainerTabButton.generated.h"

class UCommonLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapScreenContainerTabButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UAthenaMapScreenContainerTabButton();
};

