#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonBorderStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonBorderStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Background;
    
    UCommonBorderStyle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBackgroundBrush(FSlateBrush& Brush) const;
    
};

