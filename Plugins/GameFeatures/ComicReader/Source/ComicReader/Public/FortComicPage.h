#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "FortComicPanel.h"
#include "FortComicPage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortComicPage : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortComicPanel> Panels;
    
public:
    UFortComicPage();
};

