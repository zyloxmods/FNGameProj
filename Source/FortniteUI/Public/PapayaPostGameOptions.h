#pragma once
#include "CoreMinimal.h"
#include "FortPostGameScreen.h"
#include "PapayaPostGameOptions.generated.h"

class UFortPostGameMenuListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPapayaPostGameOptions : public UFortPostGameScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuListView* ListView_PostGameMenu;
    
public:
    UPapayaPostGameOptions();
};

