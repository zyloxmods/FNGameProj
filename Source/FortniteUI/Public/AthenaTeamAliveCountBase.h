#pragma once
#include "CoreMinimal.h"
#include "AthenaTeamCountSlotData.h"
#include "FortHUDElementWidget.h"
#include "AthenaTeamAliveCountBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTeamAliveCountBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaTeamAliveCountBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamSlotData(int32 TeamIdx, const FAthenaTeamCountSlotData& TeamSlotData);
    
};

