#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "TagTeamCountWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTagTeamCountWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UTagTeamCountWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRedTeamSize(int32 TeamSize, int32 TotalSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentTeam(uint8 CurrentTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlueTeamSize(int32 TeamSize, int32 TotalSize);
    
};

