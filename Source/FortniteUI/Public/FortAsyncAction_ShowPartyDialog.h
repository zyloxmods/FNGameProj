#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortDialogDescription_NUI.h"
#include "FortTeamMemberInfo.h"
#include "FortAsyncAction_ShowPartyDialog.generated.h"

class UFortAsyncAction_ShowPartyDialog;
class ULocalPlayer;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDialogDescription_NUI Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTeamMemberInfo TeamMemberInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayer;
    
public:
    UFortAsyncAction_ShowPartyDialog();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowPartyDialog* ShowPartyMemberManageDialog(UObject* InWorldContextObject, const FFortTeamMemberInfo& NewTeamMemberInfo, ULocalPlayer* NewLocalPlayer, UUserWidget* LeftAdditionalContent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowPartyDialog* ShowPartyLeaderManageDialog(UObject* InWorldContextObject, const FFortTeamMemberInfo& NewTeamMemberInfo, ULocalPlayer* NewLocalPlayer, UUserWidget* LeftAdditionalContent);
    
};

