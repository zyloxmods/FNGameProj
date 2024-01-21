#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortStatsOverviewDetailsBase.generated.h"

class UFortAttributeListItem_NUI;
class UFortAttributeList_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStatsOverviewDetailsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAttributeListItem_NUI*> OverviewStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAttributeList_NUI* DetailedStats;
    
public:
    UFortStatsOverviewDetailsBase();
    UFUNCTION(BlueprintCallable)
    void RequestStatsUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ListenForChanges(bool bListen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetLocalPlayerId() const;
    
};

