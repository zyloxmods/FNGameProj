#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHudWidgetContentComponent.h"
#include "FortMobileHudWidgetContentComponent_Highlight.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHudWidgetContentComponent_Highlight : public UFortMobileHudWidgetContentComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HighlightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> HighlightWidgetSoftClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* CurrentHighlight;
    
public:
    UFortMobileHudWidgetContentComponent_Highlight();
};

