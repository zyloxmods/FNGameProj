#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortExpeditionDetailsWidget.generated.h"

class UFortExpeditionItem;
class UFortItemViewContext_ExpeditionSquadSlotsView;
class UFortSquadSlotsView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionDetailsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotsView* ExpeditionSquadSlotsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSquadId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;
    
public:
    UFortExpeditionDetailsWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSquadId(FName SquadId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbandonExpeditionCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAbandonExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void AbandonExpedition();
    
};

