#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaTeamDisplayInfo.h"
#include "AthenaTeamSquadEntry.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTeamSquadEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Members;
    
public:
    UAthenaTeamSquadEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadAssigned(const FAthenaTeamDisplayInfo& SquadStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadID() const;
    
};

