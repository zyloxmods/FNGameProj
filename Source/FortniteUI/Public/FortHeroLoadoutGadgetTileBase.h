#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHeroLoadoutGadgetTileBase.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;
class UFortGadgetItemDefinition;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_GadgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* GadgetToRepresent;
    
public:
    UFortHeroLoadoutGadgetTileBase();
    UFUNCTION(BlueprintCallable)
    void SetGadgetToRepresent(const UFortGadgetItemDefinition* GadgetItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGadgetUpdated(bool bIsValidGadget);
    
};

