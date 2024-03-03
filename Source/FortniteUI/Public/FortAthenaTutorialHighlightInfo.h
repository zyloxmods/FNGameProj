#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Layout/Margin.h"
#include "FortAthenaTutorialHighlightInfo.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FFortAthenaTutorialHighlightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WidgetToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemHighlightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HighlightMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> HighlightWidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLegacyHighlight;
    
    FORTNITEUI_API FFortAthenaTutorialHighlightInfo();
};

