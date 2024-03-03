#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonUserWidget.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EMatchmakingInputSource.h"
#include "MatchmakingInputIndicatorBase.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UMatchmakingInputIndicatorBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchmakingInputSource InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLocalInputOnlyWhenDifferentFromDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRemoteInputOnlyWhenDifferentFromDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl RemotePlayerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonInputType LastInputType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_HotfixVisibility;
    
public:
    UMatchmakingInputIndicatorBase();
    UFUNCTION(BlueprintCallable)
    void SetRemotePlayer(FUniqueNetIdRepl UniqueId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputSourceTypeChanged(ECommonInputType InputType);
    
};

