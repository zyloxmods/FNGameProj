#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/SizeBox.h"
#include "FortUIStatStyle.h"
#include "AthenaProfileStatBox.generated.h"

class UAthenaBaseStatView;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=FortUI)
class UAthenaProfileStatBox : public USizeBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatViewChanged, UAthenaBaseStatView*, StatView);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatViewChanged OnStatViewChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespectParentStatView;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaBaseStatView* StatView;
    
public:
    UAthenaProfileStatBox();
    UFUNCTION(BlueprintCallable)
    void SetStatView(UAthenaBaseStatView* InStatView, bool RespectParentStatView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortUIStatStyle GetStatStyle(const FGameplayTag& InStat) const;
    
    UFUNCTION(BlueprintCallable)
    UAthenaBaseStatView* GetBaseStatView();
    
};

