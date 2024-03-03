#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaPlayerTeamKillsBase.generated.h"

class UAthenaPlayerViewModel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerTeamKillsBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* KillsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
public:
    UAthenaPlayerTeamKillsBase();
};

