#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Components/Widget.h"
#include "FortVoiceChatStatusIcon.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UFortVoiceChatStatusIcon : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ImageColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VoiceChatStatusMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush StatusBrush;
    
public:
    UFortVoiceChatStatusIcon();
    UFUNCTION(BlueprintCallable)
    void SetImageColorAndOpacity(const FSlateColor& InColorAndOpacity);
    
};

