#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortExpeditionListSort.h"
#include "OnExpeditionListItemSelectedDelegate.h"
#include "OnExpeditionListViewRefreshedDelegate.h"
#include "FortExpeditionListViewWidget.generated.h"

class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionListViewWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpeditionListItemSelected OnExpeditionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpeditionListViewRefreshed OnExpeditionListViewRefreshed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ExpeditionListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentTabNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortExpeditionListSort SortType;
    
public:
    UFortExpeditionListViewWidget();
    UFUNCTION(BlueprintCallable)
    void SetExpeditionListSortType(EFortExpeditionListSort InSortType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetExpeditionListSortName() const;
    
};

