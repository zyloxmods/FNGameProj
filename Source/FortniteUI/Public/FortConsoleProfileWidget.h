#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortConsoleProfileWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConsoleProfileWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DisplayName;
    
public:
    UFortConsoleProfileWidget();
};

