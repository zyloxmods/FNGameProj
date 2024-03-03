#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBrushSize.h"
#include "FortSquadIcon.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UFortSquadIcon();
    UFUNCTION(BlueprintCallable)
    void SetSquad(const FName InName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSquadSetBP();
    
};

